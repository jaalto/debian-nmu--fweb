$! --- Simple command procedure for compiling and linking FWEB with VAX/VMS ---
$!			       Version 1.30--beta
$!				January 1, 1993

$! BEFORE USING THIS PROCEDURE, you must move some files around.  Please see 
$! $FWEB:[boot.vax]READ_ME.VAX for a detailed discussion.

$! If you're bold, remove the /debug option from the cc command.

$ set verify
$ ccd := cc/debug

$ ccd ftangle
$ ccd common
$ ccd eval
$ ccd macs
$ ccd ratfor
$ ccd reserved
$ ccd style
$ ccd termcap0
$ link ftangle,common,eval,macs,ratfor,reserved,style,termcap0,fweb/opt

$ ccd fweave
$ ccd prod
$ ccd ratfor0
$ link fweave,common,prod,ratfor0,reserved,style,termcap0,fweb/opt

$ set noverify
