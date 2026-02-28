## 🛠️ How to Add my code to Github

1. Create new repo in Githubs

    After create new repo, Githubs provides some commands to guide users to create new or push an existing repo from cmd.

    Example:
        ```bash
        echo "# nhi" >> README.md
        git init
        git add README.md
        git commit -m "first commit"
        git branch -M main
        git remote add origin https://github.com/nt-thuhien/nhi.git
        git push -u origin main

2. Link repo in local to repo in Githubs
    ```bash
    cd <local repo>
    git init
    git add . #(add all files/ folders)
    git commit -am "<write sth meaningfull here>"
    git branch -M main
    git remote add origin <https link to github repo>
    git push -u origin main

3. Add all files/ folders
    ```bash
    git add.
    git commit -am "sth"
    git push origin main

4. Add specific files/ folders
    ```bash
    git add <path to file/folder>
    git commit -am "sth"
    git push origin main