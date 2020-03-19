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

if you want to change the log ouput to formats other than the default. A few prebuilt 
options are available for you to use. it will print each commit on a single line. In 
addition, the short,full and fuller options show the ouput with less or more information.

  $git log --pretty=online

*The most interesting option is format which allows you to specify your own 
log ouput format.
 
 $git log --pretty=format: "%h %s" --graph 

*Limiting Log ouput
however the time limiting options such as --since and --until 
this command gets the list to commits that match some criteria   
  
   $git log --since=2.weeks

2.4 BASIC UNDOING THINGS    

 If you commit too early and possibly forget to add some files. or you mess up you commit
message. to redo that commit make the additional changes you forgot, stage them and commit 
again use *it overwrites your previous commit.
 
   $git commit --amend

// Unstaging a Staged File
the tool $git status also reminds you how to undo changes for the files.
to unstage a file who is already stage run 
 
 $git reset HEAD <file>

// Unmodifying a modified file 
to discard changes in working directory
 
  $git checkout -- <file>

2.5 WORKING WITH REMOTES 
// SHOWING YOUR REMOTES 
to see them run $git remote command it lists the shortnames of each remote.

to show the URLs that Git has stored for the shortname to be used when reading and writing 
to that remote:
    $git remote -v 

//Adding remote repositories 
To add a new remote Git repository as a shortname you can reference easily, run 
   $git remote add <shortname> <url> 

If you want to fetch all the information that some one has but that you don't yet 
have in your repository, you can run 
   $git fetch <shortname>

//Fetching and Pulling from your remotes 
If your current branch is set up to track a remote branch, use $git pull command to 
automatically fetch and then merge that remote branch into your current branch  .
   $git pull 

//Pushing to your remotes 
When you have your project at a point that you want to share, you have to push it upstream
the command is 
  $git push <remote> <branch>

if you want to push your master branch to your origin ser run 
  $git push origin master 

// Inspecting a Remote
If you want to see more information about a particular remote. it will list the URL for the 
remote repository as well as the tracking branch information.
  $git remote show <remote>  
 
// Renaming and Removing Remotes 
to change a remote's shortname run 
 $git remote rename <oldname> <newname>

if you want to remove a remote for some reason use this command 

 $git remote remove <name>

2.6 TAGGING 
//listing your tags 
to list the existing tags use 
 $git tag  or  $git tag -l 

// Creating tags 
git supports two types of tags Lightweight and annotated 
a lightweight tag is very much like a branch that doesn't change- it's just a pointer 
to a specific commit. 

*Annotated Tags 
the easiest way is to specify -a when you run the tag command, the -m is for a message 
which is stored with the flag 
  $git tag -a v1.4 -m "my version 1.4"

you can see the tag data along with the commit that was tagged by using the command 
  $git show v1.4 

*lightweight Tags
another way to tag commits is with this. Don't supply any of the -a -s or -m just
provide a tag name.
   $ git tag v1.4-lw

// Tagging later 
You can also tag commits after you've moved past them. You can add it after the fact. To 
tag that commit, you specify the commit checksum (or part of it) at the end of the command 
   $git tag -a v1.2 9fceb02

//Sharing Tags 
You will have to explicitly push tags to a shared server after you have created them.
this process is just like sharing remote branches.
  $git push origin v1.5 

if you have a lot of tags that you want to push up at once run this command
  $git push origin --tags 

//Deleting Tags 
To delete a tag on your local repository, you can use 
 $git tag -d <tagname>

//Checking out Tags 
if you want to view the versions of files a tag is pointing to, you can do 
  $git checkout 2.0.0

2.7 GIT BASICS - GIT ALIASES 
Git doesn't automatically infer your command if you type it in partially. if you dont 
want to type the entire text of each of the git commands, you can easily set up an alias 
for each command using git config. for example 
  $git config --global alias.ci commit 

this means that, instead of typing git commit, you just need to type $git ci.  
