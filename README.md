<h1> C - Simple Shell</h3>
<h2> Description </h2>

<h2> Files </h2>
In this section, each file is followed by the functions it contains

<TABLE BORDER="4" CELLPADDING="2"  CELLSPACING="2" WIDTH="100%">
<TR>
<TD BGCOLOR="#CCCCCC">Files</TD>
<TD BGCOLOR="#CCCCCC">Functions</TD>
</TR>

<TR>  <TD>Builtins.c</TD> <TD>cd, exitexe, printenv</TD>  </TR>
<TR>  <TD>exe.c</TD> <TD>execute command</TD>  </TR>
<TR>  <TD>getcmd.c</TD> <TD>get_line, split_line</TD>  </TR>
<TR>  <TD>path.c</TD> <TD>env, path, get_env, dirTok, checkPath</TD>  </TR>
<TR>  <TD>shell.c</TD> <TD>main function</TD>  </TR>
<TR>  <TD>shell.h</TD> <TD>header file containing libraries, prototypes and external variables</TD>  </TR>
<TABLE>

<h2>Libraries</h2>
<MENU>
<LI>string.h
<LI>stdio.h
<LI>unistd.h
<LI>sys/types.h
<LI>sys/wait.h
<LI>sys/stat.h
<LI>stdlib.h
</MENU>

<h2>Compiled with</h2>
gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

<h2>More Info</h2>
All files are formatted Betty style and checked using betty-style.pl and betty-doc.pl

<h2>Authors</h2>
Khawla Jlassi : <a href= "1391@holbertonschool.com"> email</a>
<br>Cirine Sassi : <a href= "1410@holbertonschool.com"> email</a>
