[NOTES]
1. why fork twice?
    a> 1st fork is used to break the association fo the controlling terminal with the new session
    b> 2nd fork is used to avoid the session leader to open a controlling termianl
    c> There is another solution with out 2nd fork, which is explictly specify NCTTY in any open() system call in the child processes, so fork twice avoids that and simpler
