// include/tesseract.h - CORRECT VERSION
#ifndef TESSERACT_H
#define TESSERACT_H

#ifdef __cplusplus
extern "C" {
#endif

// Use the ACTUAL function names from the DLL
void* TessBaseAPICreate();
void TessBaseAPIDelete(void* handle);
int TessBaseAPIInit(void* handle, const char* datapath, const char* language);
void TessBaseAPISetImage(void* handle, const unsigned char* imagedata,
                        int width, int height, int bytes_per_pixel, int bytes_per_line);
char* TessBaseAPIGetUTF8Text(void* handle);
void TessDeleteText(char* text);

#ifdef __cplusplus
}
#endif

#endif // TESSERACT_H