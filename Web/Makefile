
# --- FWEB MAKE FILE (v. 1.60) ---

# Unix users should first type ``./configure'' for compiling a new version.
# See the more detailed instructions below.

# PLEASE REPORT ANY DIFFICULTIES WITH USING THIS MAKE FILE OR WITH ANY
# OTHER ASPECT OF COMPILING OR RUNNING FWEB:  krommes@princeton.edu.

# You should PREFACE ALL MAJOR OPERATIONS with

#	make -n ...

# This tells you what will happen without actually performing the operations.


# --- PRINCIPAL ENTRY POINTS ---

# The principal entry points to this make file can be determined by saying
# ``make help''.  (See the help: target below.)


# BEFORE USING THIS MAKE FILE: 

#    (1) If you are a Unix user, do the following:

#		cd Web
#		./configure [--prefix=path] [--exec-prefix=path]
# (This generates the following files appropriate to your system:
#	defaults.mk from defaults.mk.in;
#	config.h from config.h.in;
#	custom.h from custom.h.in.)

#		make
# (log on as root)		
#		make install

# If you are not a Unix user, DO NOT PROCEED for v1.50 or above, as the 
# following system-specific bootstrap procedures have not been tested and 
# upgraded for this version.

#    (2) Select a boot subdirectory (containing system-specific files) most
# relevant to your machine; call that $(BOOT_D).  For example, 
# BOOT_D = boot/unix/ansi.

#    (3) Copy $(BOOT_D)/defaults.mk to the web subdirectory.

#    (4) Verify the system-specific definitions in defaults.mk.  An example
# of defaults.mk is provided in each bootstrap subdirectory.  The possible
# things that you may put into defaults.mk are discussed in 
# $(MANUAL)/INSTALL_FWEB.tex.

#    (4) Copy $(BOOT_D)/custom.h to the web subdirectory.  This file
# contains definitions of various machine- or operating-system-dependent
# flags.  It will be included into the *.c files by the C compiler.


# --- INCLUDING FILES into the Makefile ---

# The file defaults.mk customizes the operation of Makefile for your
# compiler environment.
# NOTE: Not all makes include files in identical ways; you may need to
# modify the next line:

include defaults.mk # Unix
# ! include "defaults.mk" # Borland/Microsoft


# --------------------- DON'T TOUCH LINES BELOW HERE!!! --------------------

# Experts will note that this file sometimes doesn't use the full power of
# make (let alone gmake). This is because some of the makes on the personal
# computers didn't work correctly with some of the more sophisticated commands.

# Here we set up the command-line options for the FWEB processors.  Those
# options are as follows:

# COMPILER --- Either CC or GCC.  Presently only GCC is relevant, and then
#			only for the Sun.
# FILE --- Should more properly be called PATH.  The directory
#			specification for the output file.
# HOME_MACHINE --- The machine on which you're tangling.  See custom.web or
# 			custom.h for a list of the possible macros to use here.
# MACHINE --- The machine for which you're generating C code.

# DEBUGGING --- Used by the developer.
# STAT --- Optional additional commands, e.g., the statistics option -s;
#		sometimes used by the developer.
# UNDEF --- Used by the developer.
#
# You can override  macros such as MACHINE and FILE from the command line,
# in the form, e.g.,
#	make MACHINE=SGI FILE="$HOME/fweb/v1.1/unix/sgi"

UNDEF =
DEBUGGING =
STAT =

# In $(OPTIONS), 
# the -u option is used to cancel out a possible +m command in the .fweb
# ini file. For the use of CUSTOM_OPTIONS, see custom.web. 
# To kill off line numbers, say ``STAT = -\#'' for many makes, or 
# ``STAT = -^#'' for the Microsoft nmake.

OPTIONS = -u$(HOME_MACHINE) -m$(MACHINE) $(DEBUGGING)\
	 $(UNDEF) -m$(COMPILER) $(STAT) -=$(FILE)$(@)

# Other upper-case macros, such as OS_HWEB, are used to express hidden
# dependencies because of files that are @i'd or #included.

# For more discussion of the various files, please see INSTALL_FWEB.tex.

# Set up the directory macros.  (top_srcdir and srcdir should be set in
# defaults.mk.  If they are not, one must say `top_srcdir=..', `srcdir=.')

# --- Top-level--- 
FWEB0 = $(top_srcdir)

# --- The bootstrap directory tree ---
BOOT = $(FWEB0)/Boot

# --- Where the demo programs are kept ---
DEMOS = $(FWEB0)/Demos

# --- Where the user manual and fwebmac.sty are kept ---
MANUAL = $(FWEB0)/Manual

# --- Where *.web, *.hweb, *.c, and *.h are kept ---
WEB = $(srcdir)

# If you just say ``make'' or ``make bootstrap'', the source files are
# touched first so they're sure to be newer than the web files.  If you don't
# have a 'touch' facility, try saying ``make -t ...'' 
all bootstrap boot: tch_src both $(MANUAL)/fweb.info

tch_src:
	$(TOUCH) $(WEB)/typedefs.hweb $(WEB)/*.h $(WEB)/*.c 

# --- This entry makes both FWEB processors from the FWEB sources. ---
both: ftangle fweave idxmerge

# --- The ``make bootstrap'' command assumes that the WEB files are there.
# However, if you're just compiling you shouldn't need the WEB files.  In the
# absence of a WEB file, the null .DEFAULT command ``rebuilds'' the WEB file.
# Then make will try to invoke ftangle.  That shouldn't be there either,
# but if it is, it will try to tangle a non-existent file.  The .IGNORE
# command tells make to continue anyway; then it will just compile.  
# (Unfortunately, these commands don't work with all makes, so they're
# commented out.)
#.DEFAULT:

#.IGNORE:

# --- Remake things if the make commands themselves change ---
# .KEEP_STATE:

# --- CUSTOMIZATION FILE ---
$(WEB)/custom.h $(WEB)/custom.h.in: $(WEB)/custom.web
	./ftangle $(WEB)/custom $(OPTIONS) $(CUSTOM_OPTIONS) -# -v

# --- EXTRA MACRO FILE ---
$(WEB)/strmac.h: $(WEB)/strmac.web $(WEB)/os.$(HWEB)
	./ftangle $(WEB)/strmac $(OPTIONS)

# --- #INCLUDEs ---
INCLUDES_H = $(WEB)/os.h $(WEB)/config.h $(WEB)/custom.h $(WEB)/strmac.h

D_TYPE_H = $(WEB)/d_type.h $(INCLUDES_H)
Y_TYPE_H = $(WEB)/y_type.h $(INCLUDES_H)
C_TYPE_H = $(WEB)/c_type.h $(Y_TYPE_H) $(D_TYPE_H)

A_TYPE_H = $(WEB)/a_type.h $(INCLUDES_H)
S_TYPE_H = $(WEB)/s_type.h $(A_TYPE_H)

M_TYPE_H = $(WEB)/m_type.h $(INCLUDES_H)
E_TYPE_H = $(WEB)/e_type.h $(C_TYPE_H)
R_TYPE_H = $(WEB)/r_type.h $(C_TYPE_H)
T_TYPE_H = $(WEB)/t_type.h\
		 $(S_TYPE_H) $(R_TYPE_H) $(E_TYPE_H) $(M_TYPE_H)

P_TYPE_H = $(WEB)/p_type.h $(INCLUDES_H)
W_TYPE_H = $(WEB)/w_type.h\
		 $(P_TYPE_H) $(C_TYPE_H) $(S_TYPE_H) $(D_TYPE_H)

TYPEDEFS_H = $(WEB)/typedefs.h $(WEB)/os.h
MAP_H = $(WEB)/map.h $(C_TYPE_H) $(S_TYPE_H)

# --- PORTABILITY ISSUES are mostly localized here. ---
OS_HWEB = $(WEB)/os.$(HWEB) $(WEB)/sfile.$(HWEB) 
INCLUDES_HWEB = $(WEB)/sfile.$(HWEB) $(WEB)/includes.$(HWEB)\
		 $(WEB)/proto.$(HWEB) $(WEB)/time.$(HWEB)
COMMON_HWEB = $(OS_HWEB) $(WEB)/typedefs.$(HWEB) $(WEB)/mem.$(HWEB)

$(WEB)/os.h: $(WEB)/os.web $(INCLUDES_HWEB)
	./ftangle $(WEB)/os $(OPTIONS) -#

# --- The fundamental macro packages: ---
$(WEB)/typedefs.hweb $(WEB)/typedefs.h: $(WEB)/typedefs.web
	./ftangle $(WEB)/typedefs $(OPTIONS) --F -# -=$(FILE)typedefs.h

$(WEB)/map.h: $(WEB)/map.web
	./ftangle $(WEB)/map $(OPTIONS)

# --- COMMON (Routines common to both ftangle and fweave) ---
COMMON = $(INCLUDES_HWEB) $(OS_HWEB)\
		$(WEB)/typedefs.$(HWEB)\
		$(WEB)/mem.$(HWEB) $(WEB)/trunc.$(HWEB) 
COMMON_WEB = $(WEB)/common.web $(COMMON) 

$(WEB)/common.c: $(COMMON_WEB)
	./ftangle $(WEB)/common $(OPTIONS)

C_TYPE_WEB = $(WEB)/c_type.web $(OS_HWEB) 

$(WEB)/c_type.h: $(C_TYPE_WEB)
	./ftangle $(WEB)/c_type $(OPTIONS)

Y_TYPE_WEB = $(WEB)/y_type.web $(OS_HWEB)

$(WEB)/y_type.h: $(Y_TYPE_WEB)
	./ftangle $(WEB)/y_type $(OPTIONS)

COMMON_C = $(WEB)/common.c $(TYPEDEFS_H) $(MAP_H)

COMMONS = common.$(O) $(COMMON2)

commons:  $(COMMONS)

common.$(O): $(COMMON_C)
	$(COMPILE) $(PART1) $(WEB)/common.c		

common2.$(O): $(COMMON_C) 
	$(COMPILE) $(PART2) $(WEB)/common.c		


# --- STYLE (Reading the style file; also needed for both ftangle and
# fweave) --- 
S_TYPE_WEB = $(WEB)/s_type.web

$(WEB)/s_type.h: $(S_TYPE_WEB)
	./ftangle $(WEB)/s_type $(OPTIONS)

STYLE =  $(OS_HWEB) $(INCLUDES_HWEB)\
		 $(WEB)/typedefs.$(HWEB) $(WEB)/mem.$(HWEB)
STYLE_WEB = $(WEB)/style.web $(STYLE)

$(WEB)/style.c: $(STYLE_WEB)
	./ftangle $(WEB)/style $(OPTIONS)

style.$(O): $(WEB)/style.c $(TYPEDEFS_H) $(MAP_H)
	$(COMPILE) $(WEB)/style.c		


# --- TERMCAP (Dummy termcap routines) ---
A_TYPE_WEB = $(WEB)/a_type.web $(OS_HWEB)

$(WEB)/a_type.h: $(A_TYPE_WEB)
	./ftangle $(WEB)/a_type $(OPTIONS)

TERMCAP0_WEB = $(WEB)/termcap0.web 

$(WEB)/termcap0.c: $(TERMCAP0_WEB)
	./ftangle $(WEB)/termcap0 $(OPTIONS)

termcap0.$(O): $(WEB)/termcap0.c $(A_TYPE_H)
	$(COMPILE) $(WEB)/termcap0.c


# --- RESERVED WORDS ---
D_TYPE_WEB = $(WEB)/d_type.web $(OS_HWEB)

$(WEB)/d_type.h: $(D_TYPE_WEB)
	./ftangle $(WEB)/d_type $(OPTIONS)

RESERVED_WEB = $(WEB)/reserved.web $(COMMON_HWEB)\
	 $(WEB)/ccodes.$(HWEB) $(WEB)/xrefs.$(HWEB)

$(WEB)/reserved.c: $(RESERVED_WEB)
	./ftangle $(WEB)/reserved $(OPTIONS)

RESERVED_C = $(WEB)/reserved.c $(TYPEDEFS_H) $(C_TYPE_H)

RESERVES = reserved.$(O) $(RESERVED2)

reserves: $(RESERVES)

reserved.$(O): $(RESERVED_C)
	$(COMPILE) $(PART1) $(WEB)/reserved.c

reservd2.$(O): $(RESERVED_C)
	$(COMPILE) $(PART2) $(WEB)/reserved.c


# --- MACS (Macro processing for ftangle) ---
M_TYPE_WEB = $(WEB)/m_type.web $(OS_HWEB)  

$(WEB)/m_type.h: $(M_TYPE_WEB)
	./ftangle $(WEB)/m_type $(OPTIONS)

MACS = $(COMMON_HWEB) $(WEB)/macs.$(HWEB) $(WEB)/t_codes.$(HWEB)\
		$(WEB)/texts.$(HWEB) $(WEB)/stacks.$(HWEB)\
		$(WEB)/val.$(HWEB) $(WEB)/trunc.$(HWEB)
MACS_WEB = $(WEB)/macs.web $(MACS)  

$(WEB)/macs.c: $(MACS_WEB)
	./ftangle $(WEB)/macs $(OPTIONS)	

macs.$(O): $(WEB)/macs.c $(T_TYPE_H) $(TYPEDEFS_H) $(MAP_H)
	$(COMPILE) $(WEB)/macs.c		


# --- RATFOR (Implementing the Ratfor language for ftangle) ---
RATFOR = $(COMMON_HWEB) $(WEB)/t_codes.$(HWEB) $(WEB)/texts.$(HWEB)\
		$(WEB)/stacks.$(HWEB) $(WEB)/val.$(HWEB)\
		$(WEB)/macs.$(HWEB)\
		$(WEB)/trunc.$(HWEB)
RATFOR_WEB = $(WEB)/ratfor.web $(RATFOR)  

$(WEB)/ratfor.c: $(RATFOR_WEB)
	./ftangle $(WEB)/ratfor $(OPTIONS)

R_TYPE_WEB = $(WEB)/r_type.web $(OS_HWEB)  

$(WEB)/r_type.h: $(R_TYPE_WEB)
	./ftangle $(WEB)/r_type $(OPTIONS)

RATFOR_C = $(WEB)/ratfor.c $(T_TYPE_H) $(TYPEDEFS_H) $(MAP_H)

RATFORS = ratfor$(LOAD_RATFOR).$(O) $(RATFOR2)

ratfors:  $(RATFORS)

ratfor.$(O): $(RATFOR_C)
	$(COMPILE) $(PART1) $(WEB)/ratfor.c		

ratfor2.$(O): $(RATFOR_C)
	$(COMPILE) $(PART2) $(WEB)/ratfor.c		

RATFOR0_WEB = $(WEB)/ratfor0.web $(RATFOR)

$(WEB)/ratfor0.c: $(RATFOR0_WEB)
	./ftangle $(WEB)/ratfor0 $(OPTIONS)

ratfor0.$(O): $(WEB)/ratfor0.c $(T_TYPE_H)
	$(COMPILE) $(WEB)/ratfor0.c


# --- EVAL (Expression evaluation) ---
EVAL = $(COMMON_HWEB) $(WEB)/val.$(HWEB) $(WEB)/os.$(HWEB)\
		$(WEB)/t_codes.$(HWEB)
EVAL_WEB = $(WEB)/eval.web $(EVAL)  

$(WEB)/eval.c: $(EVAL_WEB)
	./ftangle $(WEB)/eval $(OPTIONS)	

E_TYPE_WEB = $(WEB)/e_type.web $(OS_HWEB) 

$(WEB)/e_type.h: $(E_TYPE_WEB)
	./ftangle $(WEB)/e_type $(OPTIONS)

eval.$(O): $(WEB)/eval.c $(E_TYPE_H) $(TYPEDEFS_H)
	$(COMPILE) $(WEB)/eval.c		


# --- FTANGLE (The ftangle processor) ---
FTANGLE = $(COMMON_HWEB) $(WEB)/macs.$(HWEB) $(WEB)/t_codes.$(HWEB)\
		$(WEB)/texts.$(HWEB) $(WEB)/stacks.$(HWEB)\
		$(WEB)/val.$(HWEB) $(WEB)/trunc.$(HWEB)
FTANGLE_WEB = $(WEB)/ftangle.web $(FTANGLE)  

$(WEB)/ftangle.c: $(FTANGLE_WEB)
	./ftangle $(WEB)/ftangle $(OPTIONS)

T_TYPE_WEB = $(WEB)/t_type.web $(OS_HWEB) 

$(WEB)/t_type.h: $(T_TYPE_WEB)
	./ftangle $(WEB)/t_type $(OPTIONS)

FTANGLE_C = $(WEB)/ftangle.c $(T_TYPE_H) $(TYPEDEFS_H) $(MAP_H)

FTANGLES = ftangle.$(O) $(FTANGLE2) $(FTANGLE3)

ftangles: $(FTANGLES)

ftangle.$(O): $(FTANGLE_C)
	$(COMPILE) $(PART1) $(WEB)/ftangle.c	

ftangle2.$(O): $(FTANGLE_C)
	$(COMPILE) $(PART2) $(WEB)/ftangle.c 	

ftangle3.$(O): $(FTANGLE_C)
	$(COMPILE) $(PART3) $(WEB)/ftangle.c

# In the following, ftangle0 is used when making with LOAD_RATFOR=0.
ftangle ftangle0 ftangle.exe: $(FTANGLES)\
		$(COMMONS) $(RATFORS) $(RESERVES) \
		eval.$(O) macs.$(O) style.$(O) $(TERMCAP0)
	$(LINK) ftangle$(OBJ) $(FTANGLE2) $(FTANGLE3)\
		common$(OBJ) $(COMMON2)\
		reserved$(OBJ) $(RESERVED2)\
		ratfor$(LOAD_RATFOR)$(OBJ) $(RATFOR2)\
		eval$(OBJ) macs$(OBJ) style$(OBJ) $(TERMCAP0)\
		$(LIBS)

# --- PROD (The ``productions'' for fweave) ---
P_TYPE_WEB = $(WEB)/p_type.web $(OS_HWEB)  

$(WEB)/p_type.h: $(P_TYPE_WEB)
	./ftangle $(WEB)/p_type $(OPTIONS)

PROD = $(COMMON_HWEB) $(WEB)/xrefs.$(HWEB) $(WEB)/tokens.$(HWEB)\
		$(WEB)/ccodes.$(HWEB) $(WEB)/output.$(HWEB)\
		$(WEB)/scraps.$(HWEB)

PROD_WEB = $(WEB)/prod.web $(PROD)  

$(WEB)/prod.c: $(PROD_WEB)
	./ftangle $(WEB)/prod $(OPTIONS)	

PROD_C = $(WEB)/prod.c $(P_TYPE_H) $(TYPEDEFS_H) $(MAP_H)

PRODS = prod.$(O) $(PROD2)

prods:  $(PRODS)

prod.$(O): $(PROD_C)
	$(COMPILE) $(PART1) $(WEB)/prod.c		

prod2.$(O): $(PROD_C)
	$(COMPILE) $(PART2) $(WEB)/prod.c		


# --- FWEAVE (The fweave processor) ---
W_TYPE_WEB = $(WEB)/w_type.web $(OS_HWEB)  

$(WEB)/w_type.h: $(W_TYPE_WEB)
	./ftangle $(WEB)/w_type $(OPTIONS)

FWEAVE = $(COMMON_HWEB) $(WEB)/xrefs.$(HWEB) $(WEB)/tokens.$(HWEB)\
		$(WEB)/ccodes.$(HWEB) $(WEB)/output.$(HWEB)\
		$(WEB)/scraps.$(HWEB)

FWEAVE_WEB = $(WEB)/fweave.web $(FWEAVE)  

$(WEB)/fweave.c: $(FWEAVE_WEB)
	./ftangle $(WEB)/fweave $(OPTIONS)

FWEAVE_C = $(WEB)/fweave.c $(W_TYPE_H) $(TYPEDEFS_H) $(MAP_H)

FWEAVES = fweave.$(O) $(FWEAVE2) $(FWEAVE3)

fweaves: $(FWEAVES)

fweave.$(O): $(FWEAVE_C)
	$(COMPILE) $(PART1) $(WEB)/fweave.c		

fweave2.$(O): $(FWEAVE_C)
	$(COMPILE) $(PART2) $(WEB)/fweave.c		

fweave3.$(O): $(FWEAVE_C)
	$(COMPILE) $(PART3) $(WEB)/fweave.c

fweave fweave.exe: $(FWEAVES)\
		$(COMMONS) $(PRODS) ratfor0.$(O) $(RESERVES) style.$(O)\
		$(TERMCAP0)	
	$(LINK) fweave$(OBJ) $(FWEAVE2) $(FWEAVE3)\
		common$(OBJ) $(COMMON2)\
		prod$(OBJ) $(PROD2)\
		reserved$(OBJ) $(RESERVED2)\
		style$(OBJ) ratfor0$(OBJ) $(TERMCAP0)\
		$(LIBS)

# --- IDXMERGE (utility for merging several indexes) ---
$(WEB)/idxmerge.c: $(WEB)/idxmerge.web
	./ftangle $(WEB)/idxmerge $(OPTIONS)

idxmerge.$(O): $(WEB)/idxmerge.c
	$(COMPILE) $(WEB)/idxmerge.c

idxmerge idxmerge.exe: idxmerge.$(O)
	$(LINK) idxmerge$(OBJ)

#------------------------------------------------------------------------------

# --- DOCUMENTATION ---
FWEB_TEX = $(FWEB0)fweb.tex # This file is included for all documentation.

# --- We can handle all the dvi files with a generalized suffix rule. ---

# If your make (e.g., Borland) doesn't like the following line, try just
# commenting it out. 
.SUFFIXES: .tex .dvi 

.tex.dvi: 
	latex $*			
	$(PRINT_DVI) $(@)

# In the following, note the occasional use of the -i command-line option
# to fweave. This prevents repeated printing of the header files that are
# included via @I.

fwebmac.tex: $(MANUAL)/fwebmac.web
	./fweave $(MANUAL)/fwebmac

custom.tex: $(WEB)/custom.web $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/custom

strmac.tex: $(WEB)/strmac.web $(OS_HWEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/strmac -i

y_type.tex: $(Y_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/y_type -i

c_type.tex: $(C_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/c_type -i	

common.tex: $(COMMON_WEB)
	./fweave $(WEB)/common

e_type.tex: $(E_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/e_type -i	

eval.tex: $(EVAL_WEB)
	./fweave $(WEB)/eval -i		

m_type.tex: $(M_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/m_type -i	

macs.tex: $(MACS_WEB)
	./fweave $(WEB)/macs -i		

p_type.tex: $(P_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/p_type -i	

prod.tex: $(PROD_WEB)
	./fweave $(WEB)/prod -i		

r_type.tex: $(R_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/r_type -i	

ratfor.tex: $(RATFOR_WEB)
	./fweave $(WEB)/ratfor -i	

ratfor0.tex: $(RATFOR0_WEB)
	./fweave $(WEB)/ratfor0 -i

d_type.tex: $(D_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/d_type -i

reserved.tex: $(RESERVED_WEB)
	./fweave $(WEB)/reserved -i -ykw750

t_type.tex: $(T_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/t_type -i	

ftangle.tex: $(FTANGLE_WEB)
	./fweave $(WEB)/ftangle -i

s_type.tex: $(S_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/s_type -i	

style.tex: $(STYLE_WEB)
	./fweave $(WEB)/style -i		

a_type.tex: $(A_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/a_type -i

termcap0.tex: $(TERMCAP0_WEB)
	./fweave $(WEB)/termcap0 -i

w_type.tex: $(W_TYPE_WEB) $(WEB)/formats.$(HWEB)
	./fweave $(WEB)/w_type -i	

fweave.tex: $(FWEAVE_WEB)
	./fweave $(WEB)/fweave -i

#------------------------------------------------------------------------------

# --- INSTALLATION of the processors ---

install: both idxmerge $(MANUAL)/fweb.info
	@echo ""
	@echo "If any changes need to be made to the default directories,"
	@echo "please use --prefix and/or --exec-prefix options to configure,"
	@echo " or edit ./defaults.mk.in, then rerun ./configure."
	@echo ""
	$(INSTALL_PROGRAM) ftangle $(bindir)/ftangle
	$(INSTALL_PROGRAM) fweave $(bindir)/fweave
	$(INSTALL_PROGRAM) idxmerge $(bindir)/idxmerge
	test -d $(texdir) || mkdir -p $(texdir)
	$(INSTALL_DATA) $(MANUAL)/fwebmac.sty $(texdir)/fwebmac.sty
	$(INSTALL_DATA) $(MANUAL)/fweb.tex $(texdir)/fweb.tex
	$(INSTALL_DATA) $(MANUAL)/fweb.1 $(mandir)/fweb.$(manext)
	$(INSTALL_DATA) $(MANUAL)/fweb.info* $(infodir)/
#	$(INSTALL_DATA) $(MANUAL)/fweb.texi $(texinfodir)/fweb.texi
#	@echo ""
#	@echo "DON'T FORGET TO RECORD THE PRESENCE OF fweb.info BY EDITING $(infodir)/dir."

uninstall:
	@echo "Sorry, uninstall is not implemented yet!"

$(MANUAL)/fweb.info: $(MANUAL)/fweb.texi
	cd $(MANUAL) && makeinfo --fill-column=70 fweb.texi

# --- CLEANUP ---
all_clean very_clean: clean clean_man clean_install

# --- Clean up the OBJECT FILES ---
clean:
	$(RM) -f ftangle fweave *.o core

mostlyclean: clean

distclean: clean
	$(RM) -f defaults.mk config.cache config.log config.status

realclean: distclean


# --- HELP ---
help:
	@echo "Important targets for this Makefile:"
	@echo ""
	@echo " all       --- Touch *.c and *.h, then compile and link"
	@echo "		      ftangle and fweave."
	@echo " both	  --- Tangle, compile, and link ftangle and"
	@echo "		      fweave from the FWEB sources."
	@echo " clean     --- Removes the FWEB processors and object files."
	@echo " distclean --- Like clean, but also deletes defaults.mk,"
	@echo "               config.cache, config.log, and config.status."
	@echo " ftangle   --- Tangle, compile, and link ftangle."
	@echo " fweave    --- Tangle, compile, and link fweave."
	@echo " help      --- Obtain help about this Makefile."
	@echo " install   --- Install the processors (you must be root)."
	@echo " *.tex     --- Woven documentation for FWEB source code."
	@echo " *.dvi     --- Document AND PRINT FWEB source code."
	@echo "               (To prevent a dvi file from being printed"
	@echo "               automatically, uncomment the #ECHO = line in"
	@echo "               defaults.mk.in.)"


