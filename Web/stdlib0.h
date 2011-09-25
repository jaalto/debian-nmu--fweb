/* --- Extra prototypes for Sun-gcc environment --- */

#include <stdio.h> /* To get |FILE|. */

int    _doprnt(const char*, void*, FILE*);
int    _doscan(FILE*, const char*, ...);
int    _filbuf(FILE*);
int    _flsbuf(unsigned, FILE*);
int    fclose(FILE*);
FILE*  fdopen(int, const char*);
int    fflush(FILE*);
int    fgetc(FILE*);
char*  fgets(char*, int, FILE *);
FILE*  fopen(const char*, const char*);
int    fprintf(FILE*, const char*, ...);
int    fputc(int, FILE*);
int    fputs(const char*, FILE*);
int    fread(void*, int, int, FILE*);
FILE*  freopen(const char*, const char*, FILE*);
int    fscanf(FILE*, const char*,...);
int    fseek(FILE*, long, int);
long   ftell(FILE *);
int    fwrite(const void*, int, int, FILE*);
char*  gets(char*);
int    getw(FILE*);
int    pclose(FILE*);
FILE*  popen(const char*, const char*);
int    printf(const char*,...);
int    puts(const char*);
int    putw(int, FILE*);
int    remove(const char *);
int    rename(const char *,const char *);
int    rewind(FILE*);
int    scanf(const char*, ...);
int    setbuf(FILE*, char*);
int    setbuffer(FILE*, char*, int);
int    setlinebuf(FILE*);
int    setvbuf(FILE*, char*, int, int);
int    sscanf(const char*, const char*, ...); /* Check first const. */
int    system(const char *);
FILE*  tmpfile();
int    ungetc(int, FILE*);
int    vfprintf(FILE*, const char*, ...);

int atoi(const char *);
long atol(const char *);
#if(0)
int memcmp(const void *,const void *,size_t);
void memset(void *,int,size_t);
#endif
int abs(int);
double strtod(const char *,char **);
long strtol(const char *,char **,int);
#if(0) /* Conflict for v4.1.1 */
int sprintf(char *,const char *,...);
#endif
#if HAVE_STDARG_H
int vprintf(const char *,va_list);
int vsprintf(char *,const char *,va_list);
#endif

int ftime();
int tolower(int);
