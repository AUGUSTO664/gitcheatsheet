//this is the chapter three

3.1 Git Branching - Branches in a Nutshel 

some people refer to Git's branching model as its "killer feauture", and it 
certainly sets git apart in the VCS community. Why is it so special? They 
way Git branches is incredibly lightweight, making branching operations nearly 
instantaneous, and switching back and forth between branches generally just
as fast. Unlike many others VCSs, Git encourages workflows that branch and merge 
often, even multiple times in a day. Understanding and mastering this feature
gives you a powerful and unique tool and can entirely change the way that you 
develop.

A branch in Git is simply a lightweight movable pointer to one of these commits.
the default branch name in Git  is 'master'. Every time you commit, the master
branch pointer moves forward automatically.

// Creating a New branch
A branch is a pinter for you to move around to create a new branch run this command
 $git branch <name> 

 this creates a new pointer to the same commit you're currently on.
To see where the branch pointers are pointing use
  $git log --oneline --decorate

//Switching Branches 
To switch to an existing branch run the command
  $git checkout <branch_name>

git log will only show commit history below the branch you've checked out.
to show commit story for the desired branch you have to explicitly specify 
   $git log <branchname>  for show all $git log -all


3.2 BASIC BRANCHING AND MERGING 
you are working on a website, do some work and the you receive a call that another 
issue is critical and you need a hotfix. With Git you don't have to deploy 
your fix along with a issue changes you've made and you dont have to put a lot 
of effort into reverting those changes before you can work on applying your
fix to what is in production. all you have to do is switch back to your 
master branch 

this is an important point to remember: when you switch branches, Git resets 
your working directory to look like it did the last time you commited on
that branch 

to merger two different branches for example the master and hotfix
you must be in the master branch if not do this 
$git checkout master /it turns the master branch
$git merge hotfix /it merges both branchs 

to delete a branch that you dont need anymore run 
$git branch -d <branch_name>

basic merge conflicts 
if you want to see a graphical tool to resolve these issues, you can run 
git mergetool, which fires up an appropiate visual merge tool and walks you 
through the conflicts 

$ git mergetool


3.3 BRANCH MANAGEMENT 

 
