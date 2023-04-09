INFO VIEWER FOR ACTIVEX PATCH

PRODUCT VERSION

This patch is intended for use with Seagate Info 7 (versions 7.0.2.0 and 7.0.2.1) only.

DESCRIPTION

When the Crystal Reports 8 Web Component Server is installed on a machine on which Seagate Info 7 resides, the Info Viewer for ActiveX will not function correctly.

To resolve this issue, users will need to run the executable CVWAX.EXE. This will launch an install program which will replace the existing Info Viewer for ActiveX program file with a new one which is compatible with both Seagate Info 7 and Seagate Crystal Reports 8.

FILES REPLACED

File			Target Directory
cvwax32.exe	 	...\SI\x86
