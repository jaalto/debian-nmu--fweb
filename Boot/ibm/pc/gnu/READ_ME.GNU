		   --- COMPILING FOR EXTENDED MEMORY ---

  The files in this subdirectory are intended for use with ports of 32-bit
compilers such as D. J. Delorie's djgpp, available from

	oak.oakland.edu:/SimTel/vendors/djgpp.

  The basic procedure is:

	- Copy {defaults.mk,custom.h,*lnk} to fweb\Web (or wherever your
Makefile and web files are).

	- Examine what's in defaults.mk, which is included into the
Makefile.  It's set up for use with gcc, but you may wish to include some
compiler flags such as `-O'.

	- Say `make help' to see the principal targets in the Makefile.

	- Say `make -n' to see what will happen.  You can use Microsoft's
nmake instead of make.

	- With djgpp, you may have to replace a_type.h by an empty file.
(Otherwise, there are conflicts with the declarations of the termcap
routines that lead to error messages.  This shouldn't happen, but I
couldn't figure out exactly what was going on.)

	- When you say `make', the files `ftangle' and `fweave' (NOT
`ftangle.exe' and `fweave.exe') are produced.  (To make ftangle without
ratfor, say `make ftangle0'.)  If the link line doesn't
work because it's too long, you can link by hand by saying

		gcc @t_lnk	# => ftangle
		gcc @t0_lnk	# => ftangle0
		gcc @w_lnk	# => fweave
	
	- These files must be run by a memory extender.  With djgpp, that
is go32.exe.  In that environment, you can say  

		coff2exe ftangle
		coff2exe fweave

This produces `ftangle.exe' and `fweave.exe', which include `stub.exe'
(which in turn calls go32.exe).  These executables will then run in
extended memory when go32.exe is in the search path.

	- In order for all this to work, you need appropriate statements in
config.sys and autoexec.bat. ... (Discussion not finished.)

