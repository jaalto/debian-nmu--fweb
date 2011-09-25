	    --- BOOTSTRAPPING WHEN ./configure DOESN'T WORK ---

   Normally, the installation procedure is, in brief,

	cd Web
	./configure
	make
	
For more discussion, see READ_ME.FWEB.

   When you can't use ./configure (when you can't run an sh script), you
can still proceed.  The files in this subdirectory help in various
situations.  In addition to READ_MEs, each boot subdirectory includes the
two files defaults.mk (included into Web/Makefile) and custom.h.  These
should be copied to the Web subdirectory and possibly edited to reflect the
idiosyncracies of your particular system.

	ibm  --- For IBM mainframes and personal computers.
	misc --- When nothing else is appropriate.
	unix --- For Unix systems.  The vanilla ANSI-C bootstrap is
		   included here.
	vax  --- For VMS.  

For version 1.6x, the only files that are relevant (i.e., tested) are

	ibm/pc/gnu --- For working with 32-bit compilers and extended memory.
	unix/ansi  --- For a fully ANSI-compliant Unix environment.

  For example, to compile files for a generic ANSI bootstrap, you would

	cd fweb-1.60
	cp boot/unix/ansi/{defaults.mk,custom.h} Web
	cd Web
	make

