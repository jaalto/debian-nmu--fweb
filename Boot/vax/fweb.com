$! This is a sample COM file that defines FWEAVE and FTANGLE to be foreign
$! procedures, since they take command-line arguments. They can be abbreviated
$! to the first four letters. 
$!
$! The example assumes that the logical name TEX$FWEB has already been defined
$! to point to the area where fweave.exe and ftangle.exe have been placed.
$! That might be your own subdirectory, or a system area. An example of how
$! to define TEX$FWEB is the text between quotes on the next line:
$!    "$ define tex$fweb ux2:[krommes.tex.fweb]"
$!
$! In the following, the first '$' indicates a foreign procedure.
$ fwea*ve :== $tex$fweb:fweave
$ ftan*gle :== $tex$fweb:ftangle
