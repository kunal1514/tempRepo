/*
** File:    UXFHTML.h
**
** Author:  Anthony Low
** Date:    95-10-15
**
** Purpose: An export format DLL for HTML 3.x
**
**
** Copyright (c) 1993-1997 Seagate Software Information Management Group, Inc. 
*/
#if !defined (UXFHTML_H)
#define UXFHTML_H

#if defined (__cplusplus)
extern "C"
{
#endif

// Set 1-byte structure alignment
#if defined (__BORLANDC__)               // Borland C/C++
  #pragma option -a-
#elif defined (_MSC_VER)                 // Microsoft Visual C++
  #if _MSC_VER >= 900                    // MSVC 2.x and later
    #pragma pack (push)
  #endif
  #pragma pack (1)
#endif 

/********************************************/

#define UXFHTML3Type          	0          // Draft HTML 3.0 tags
#define UXFExplorer2Type		1          // Include MS Explorer 2.0 tags
#define UXFNetscape2Type		2          // Include Netscape 2.0 tags
#define UXFHTML32ExtType        1          // HTML 3.2 tags + bg color extensions
#define UXFHTML32StdType        2          // HTML 3.2 tags

typedef struct UXFHTML3Options
{
	WORD structSize;

	char FAR *fileName;		// ptr to full Windows filepath of HTML output file
							//        e.g. "C:\pub\docs\boxoffic\default.htm"
							// NOTE:
							//  - any exported GIF files will be
							//    located in the same directory as this file
}
	UXFHTML3Options;
#define UXFHTML3OptionsSize      (sizeof (UXFHTML3Options))

/********************************************/
// Reset structure alignment
#if defined (__BORLANDC__)
  #pragma option -a.
#elif defined (_MSC_VER)
  #if _MSC_VER >= 900
    #pragma pack (pop)
  #else
    #pragma pack ()
  #endif
#endif    

#if defined (__cplusplus)
}
#endif

#endif // UXFHTML_H
