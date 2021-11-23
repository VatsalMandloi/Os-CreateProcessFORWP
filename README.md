# Os-CreateProcessFORWP
The CreateProcess function creates a new process, which runs independently of the creating process. However, for simplicity, the relationship is referred to as a parent-child relationship.

If CreateProcess succeeds, it returns a PROCESS_INFORMATION structure containing handles and identifiers for the new process and its primary thread. The thread and process handles are created with full access rights, although access can be restricted if you specify security descriptors. When you no longer need these handles, close them by using the CloseHandle function.

As fork is not the windos command and in order to run that we need POSIX based compiler like cygwin in order to run fork in windows but as fork creates a child process in windos we can do it using CreateProcess command.
