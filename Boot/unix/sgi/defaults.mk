# Generated automatically from defaults.mk.in and sgi.ini by FWEB_configure.
# --- START of SYSTEM CONFIGURATION SECTION ---
# 

# --- Supporting VPATH ---
top_srcdir = ./..
srcdir = .
VPATH = .

# --- Names of system commands --- 
# (Used in the Makefile and possibly internally to FWEB.)
MAKE = make
MV = mv
RM = rm
TOUCH = touch

# --- COMPILING ---

# --- Compiler name ---
CC = cc

# An FWEB flag, either CC or GCC.  This flag isn't used for bootstrapping; it
# is required for properly regenerating custom.h by tangling custom.web.  If
# you're on the Sun and working with gcc, say ``COMPILER = GCC''.
COMPILER = CC

# --- Compiler options ---
# Debugging and optimization options for the C compiler.
CFLAGS =  

# How to run the C preprocessor
CPP = 

# Header file search directory (-Idir) and any other miscellaneous options
# for the C preprocessor and compiler.
CPPFLAGS = 

# (Compiler macro definitions.  In addition, see the discussion of PARTn
# below.)  
DEFS =  

# --- The actual compile command used by the Makefile.  ---
COMPILE = $(CC) -c $(CFLAGS) $(CPPFLAGS) $(DEFS) -Dconst=



# --- LINKING ---

# --- Extensions for object files ---
# $(O) is used for targets in the Makefile. $(OBJ) is the suffix used in
# the link line.  (Sometimes $(OBJ) can be null if the compiler understands
# defaults and the length of the command line is an issue, as it is on some
# personal computers.)
O = o
OBJ = .$(O)

# TERMCAP0 is either a file name, or null.  If the termcap library is
# available, TERMCAP0 should be null and LIBS should include -ltermcap.
# If the termcap library is not available, TERMCAP0 should be termcap0.$(O).
TERMCAP0 = 

# --- Linker options ---

# Stripping (-s) and other miscellaneous options for the linker.
LDFLAGS = -g

# Library options -l and -L to pass to the linker.
LIBS = -lm 

# --- The actual link command used by the Makefile.  ---
# TRY NOT TO CHANGE THIS LINE.
LINK = $(CC) $(LDFLAGS) -o $(@)



# --- MISCELLANEOUS ---

# --- How to print a dvi file ---
ECHO = echo # Use this to prevent actual printing.
PRINT_DVI  = $(ECHO) lpr -d

# --- FWEB flags indicating type of machine on which you're tangling
# (HOME_MACHINE) and for which machine you're generating C code. ---
HOME_MACHINE = SGI
MACHINE = SGI

# --- FWEB file suffixes ---
# (For IBM-PC, shorten to ``hwe'')
HWEB = hweb

# --- Splitting FTANGLE & FWEAVE into several parts, especially for small
# compilers on personal computers.  Here's an example for the IBM-PC,
# Microsoft compiler ---
# ---------------------------------------------------------------------------
#PART1 = /Dpart=1
#PART2 = /Dpart=2
#PART3 = /Dpart=3

#FTANGLE2 = ftangle2.$(O)
#FTANGLE3 = ftangle3.$(O)

#FWEAVE2 = fweave2.$(O)
#FWEAVE3 = fweave3.$(O)

#PROD2 = prod2.$(O)
#RATFOR2 = ratfor2.$(O)
#RESERVED2 = reservd2.$(O)
#COMMON2 = common2.$(O)
# ---------------------------------------------------------------------------

# The PARTn macros are compiler options that define the macro |part|
#to be n, for example ``-Dpart=2''
PART1 = 
PART2 = 
PART3 = 

# Here are the names of the second and third parts of the object files.
FTANGLE2 = 
FTANGLE3 = 

FWEAVE2 = 
FWEAVE3 = 

PROD2 = 
RATFOR2 = 
RESERVED2 = 
COMMON2 = 


# --- INSTALLATION INFORMATION ---
INSTALL = /bin/install -c
INSTALL_PROGRAM = $(INSTALL)
INSTALL_DATA = $(INSTALL) -m 644

# Top-level path for executable binaries (usually /usr/local):
exec_prefix = 

# Where the processors go:
bindir = $(exec_prefix)/bin

# Top-level path for everything else (usually /usr/local)
prefix = 
doc_prefix = $(prefix)

# Where the Unix man pages go:
manext = 1
mandir = $(doc_prefix)/man/man$(manext)

# Where the emacs info* files go:
infodir = $(doc_prefix)/info

# Where the source file fweb.texinfo goes:
texinfodir = $(infodir)

# Where the fwebmac.sty macro package used by FWEAVE goes, as well as the
# file fweb.tex needed for weaving the FWEB source code, go:
texdir = $(prefix)/

# --- END of SYSTEM CONFIGURATION SECTION ---

