2.1 STARTING A REPOSITORY 
Once time we have installed Git on our computer, the next step is working with a repository 
we can create a new repository in an existing repository 

first we enter to the directory 
$ cd/home/user/my_project

//to start with your repository insede the directory type 
    $git init 

//Cloning an existing repository you only need to type 
    $git clone <url>

to put the repository in specific directory type 
   $git clone <url> /diretory_name

2.2 GIT BASICS-RECORDING CHANGES TO THE REPOSITORY 

Tracked files are files that were in the last snapshot, git knows the
tacked fies 

Untracked files are everything else that were not in your last snapshot and are not 
in your staging area 

//Checking the status of your files 
The main tool to determine which files are in which state is the 
 $git status 

//Tracking New files
in order to begin tracking a new file you use the command 
 $git add <file_name>

//Staging modified files 
lets change a file that was already tracked. if you change a previously tracked file called
new_name and then you run $git status 

it will appear under a section named "changes not stages for commit" which means that the file
that is tracked, has been modified in the working directory, but not yet staged to stage it run 
the command $git add. it is a multipurpose command -you used it to begin tracking new files, to 
stage files and to do other things like marking marge- conflicted files as resolved.

*Short status, git has a short status so you can see your changes in a more compact way.
 $git status -s or $git status --short 
 New file that aren't tracked have a ?
 New files that have been added to the staging area hava an A
 Modified files have a M and so on 

//Ignoring files 
Often you'll have a class of files that you don't want git to automatically add or even show 
you as being untracked. In such cases, you can create a files listing patterns to match them 
named: 
    ".gitignore"
setting up a .gitignore file for you new repository before you get going is generally a good idea.

//Viewing your staged and Unstaged changes 
  $git diff 
You'll probably use it most often to answer these two questions: 

what have you changed but not yet staged ?
what have you staged that you are about to commit?

this command compares what is in your working directory with what is in your staging
area, the result tells you the changes you've made that you haven't yet staged.
  
  $git diff --staged

if you want to see what you've staged that will go into your next commit, this command compares your 
staged changes to your last commit.

//Commiting your changes 
when your staging area is set up the way you wannt it, you can commit your changes. Anything 
that is still unstaged won't go into this commit. The simplest way to commit is to type 
   $git commit 

*for an even more more explicit reminder of what you've modified, you can pass 
doing also puts the diff of your change in the editor, so you can see exactly what changes 
you're commiting 
   $git commit -v

*Alternatively you can type your commit message in line with the commit command 
   $git commit -m <message>

*Skipping the staging area 
Git provides a simple shortcut adding the -a option to the $git commit. It makes git
automatically stage every file that is already tracked before doing the commit
letting you skip it.
           $git commit -a  

//Removing files 
to remove a file from git, you have to remove it from your tracked files.
  $git rm <file_name>

another useful thing you may want to do is keep the file in your working tree
but remove it from your staging area 
  $git rm --cached <file_name>

//moving files 
if you want to rename a file in git, you can run something like 
   $git mv file_from file_to 

2.3 VIEWING THE COMMIT HISTORY 
After you have created several commits you'll probably want to look back to see
what has happened run 
   $git log 

one of the more helpful options which show you the difference introduced in each commit 
  $ git log -p  or  $git log --patch 

if you want to see some abbrevied stats  for each commit you can use, it prints each commit entry 
a list of midified files, how many files were changed and how many lines in those files added and 
removed it also puts a summary of the information at the end. 
   $git log --stat  

if 



 
 



