#include <stdio.h>
#include <stdint.h>
#include<cs50.h>
 
 const int BLOCK_SIZE = 512;
 
 int main()
 {
    FILE *f;
    
    if ((f = fopen("card.raw", "r")) == NULL)
    {
        fprintf(stderr, "Could not open the file");
        return 1;
    }
    
    uint8_t buf[512];
    
    int counter = 0;
    FILE *fw = NULL;
    

    while (fread(buf, BLOCK_SIZE, 1, f))
    {
        
        if (buf[0] == 0xff && buf[1] == 0xd8 && buf[2] == 0xff
            && (buf[3] == 0xe0 || buf[3] == 0xe1))
        {
           
            if (fw != NULL)
                fclose(fw);
            
            char filename[8];
            sprintf(filename, "%03d.jpg", counter);
                
            
            fw = fopen(filename, "w");
            
            counter++;
        }
        
        if (fw != NULL)
            fwrite(buf, BLOCK_SIZE, 1, fw);
    }
    
    if (fw != NULL)
        fclose(fw);
    
    fclose(f);
 
    return 0;
 } 