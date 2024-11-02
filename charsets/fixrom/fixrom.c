#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int c, unsigned char ch) {
  unsigned char v = 128;

  printf("Byte: %4.4X %2.2X '", c, ch);
  for(char i = 0; i < 8; i++) {
    printf("%s", (ch & v ? "*":" "));
    v=v/2;
  }
  printf("'\n");
}

FILE* openOutput(char* prefix,unsigned char num) {
  char name[50];
  FILE* ofp;

  sprintf(name,"%s.%d.bin",prefix,num);
  // Opening file in write mode
  ofp = fopen(name, "wb+");

  if (NULL == ofp) {
    printf("file %s can't be opened\n",name);
  }
  return ofp;
}

int main(int argc, char** argv) {
  
    FILE *file_ptr, *ofp= NULL;
    unsigned char buff[4096];
    int i = 0;

    unsigned char ch;
    unsigned char num = 0;

    if(argc < 2) {
      fprintf(stderr,"%s <romfile> [<outfile>]\n",argv[0]);
    }

    // Opening file in reading mode
    file_ptr = fopen(argv[1], "rb");

    if (NULL == file_ptr) {
        printf("file can't be opened \n");
          return EXIT_FAILURE;
    }

    for(;!feof(file_ptr);) {
      for (int j=0;j<4096;j++) {
        ch = fgetc(file_ptr);
        if(feof(file_ptr)) {
          break;
        }
        buff[j] = ch;
      }
      if(!feof(file_ptr)) {
        for(int j=0;j<256;j++) {
          if(argc > 2 && (j == 0 || j==128)) {
            if(ofp != NULL)
              fclose(ofp);
            ofp=openOutput(argv[2],num++);
            if(ofp==NULL)
              return EXIT_FAILURE;
          }
          for(int k = 0; k < 16; k++) {
            print(i+j+(k*256),buff[j+(k*256)]);
            if(ofp != NULL) {
              putc(buff[j+(k*256)],ofp);
            }
          }
        }
        i+=4096;
        printf("------------------Charset done\n");
      }
    }
    // Closing the file
    fclose(file_ptr);
    if(ofp != NULL)
      fclose(ofp);
    return 0;
}
