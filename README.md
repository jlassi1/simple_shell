<h1> C - Simple Shell</h3>
<h2> Description </h2>
<div>The simple shell is a command language interpreter that takes commands from the STDIN and executes them. Its code is written in C language.</div>
<h2> Files </h2>

<TABLE>
<TR>
<TD BGCOLOR="#CCCCCC"><B>Files</B></TD>
<TD BGCOLOR="#CCCCCC"><B>Functions</B></TD>
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

<h2>List of allowed functions and system calls for this project</h2>
   <MENU>
   <LI> access (man 2 access)
   <LI> chdir (man 2 chdir)
   <LI> close (man 2 close)
   <LI> closedir (man 3 closedir)
   <LI> execve (man 2 execve)
   <LI> exit (man 3 exit)
   <LI> _exit (man 2 _exit)
   <LI> fflush (man 3 fflush)
   <LI> fork (man 2 fork)
   <LI> free (man 3 free)
   <LI> getcwd (man 3 getcwd)
   <LI> getline (man 3 getline)
   <LI> isatty (man 3 isatty)
   <LI> kill (man 2 kill)
   <LI> malloc (man 3 malloc)
   <LI> open (man 2 open)
   <LI> opendir (man 3 opendir)
   <LI> perror (man 3 perror)
   <LI> read (man 2 read)
   <LI> readdir (man 3 readdir)
   <LI> signal (man 2 signal)
   <LI> stat  (man 2 stat)
   <LI> lstat  (man 2 lstat)
   <LI> fstat  (man 2 fstat)
   <LI> strtok (man 3 strtok)
   <LI> wait (man 2 wait)
   <LI> waitpid (man 2 waitpid)
   <LI> wait3 (man 2 wait3)
   <LI> wait4 (man 2 wait4)
   <LI> write (man 2 write)
   </MENU>

<h2>Compiled with</h2>
gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

<h2>More Info</h2>
All files are formatted according the Betty style and checked using <a href= "https://github.com/holbertonschool/Betty/blob/master/betty-style.pl"> betty-style.pl </a> and <a href= "https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl"> betty-doc.pl</a>

<h2>Authors</h2>
Khawla Jlassi : <a href= "1391@holbertonschool.com"> email</a>
<br>Cirine Sassi : <a href= "1410@holbertonschool.com"> email</a>
