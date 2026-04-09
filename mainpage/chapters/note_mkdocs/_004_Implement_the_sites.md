#### Refer
- https://www.toptal.com/designers/htmlarrows/symbols/
- [mkdocs.yml basic keys](./_002_create_new_project.md/#2-mkdocsyml)
- [mkdocs.yml theme keys](./_003_theme_for_pages.md/#choosing-theme)

---

### Index:
- [Configure site information in mkdocs.yaml](#1-configure-site-information)

- [extra_css]
- [extra_javascript]
- [extra_template]

- [Deploy markdown to webpage]()

---


##### 1. Configure site information
- mkdocs help: `mkdocs build --help`
- Specify another path for YAML configuration file:  
    `mkdocs build -f [cfg_file.yml]`
- `site_name` is compulsory field in configuration file  
    `site_name: Main website name`
- Other key:
    - `site_url`: default NULL, add a link with canonical URL (site mainpage, site homepage, or main page of a project). It better for Google optimize searching.
    - `repo_url`: default NULL, provides a link to your MkDocs repository (GitHub, Bitbucket, GitLab,...).
    - `repo_name`: provides the name for the link to your MkDocs repository on each page. Otherwise the hostname from the `repo_url`.
    - `edit_uri`: "/docs/" is default.  
    Change source path when the `docs_dir` changed.
    ---
    - `site_description` general description for website. Display while searching web on Google.
    - `site_author` Author of website.
    - `copyright` Copyright information.  
        Example: &#169; `2026 Author. All rights reserved.`
    
    --- 
    - `remote_branch`: default `gh-pages`.  
    Set the remote branch to commit to when using `gh-deploy` to deploy to GitHub Pages. This option can be overridden by a command line option in `gh-deploy`.
    - `remote_name`: default `origin` in current GitHub repository.


--- 
##### 2. Deploy markdown to webpage
- Run the website local:
    - Without build: `mkdocs serve`
    - Build: `mkdocs build`
- Push website to GitHub Pages branch