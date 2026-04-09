## Create new prject
Refer: 
- https://www.mkdocs.org/user-guide/writing-your-docs/
- https://www.mkdocs.org/user-guide/writing-your-docs/#index-pages
- https://www.mkdocs.org/user-guide/configuration/

---
### MkDocs project structure
```txt
    mkdocs.yml          (compulsory)
    docs/               (compulsory)
        index.md        (compulsory)
        about.md        (optional)
        license.md      (...)
```

#### 1. Index page: 
The `index.md` or `.mdown, .markdown, .mkdn, mkd` will be convert into `index.html`.  
Reason is most of web server only support main page is `index.html`.

#### 2. mkdocs.yml:
`mkdocs.yml` is YAML file (== JSON but friendlier with human) help configures pages and navigation.

List of common key for `mkdocs.yml`:  
`site-name`, `theme`, `nav`, `docs-dir`, `site-dir`.

- [site-name](./_004_Implement_the_sites.md/#1-configure-site-information)(compulsory)

- [theme](./_003_theme_for_pages.md)

- `nav` is a key with list of values are markdown files.
    - Example:
        ``` yml
            nav:
                    # Note with `index.md`: 
                    #   I tested with some theme, index.md automatic display as default page. 
                    #   While try add this one, page will miss navigation bar, olny index.html
                    # Recommend comment index file while it display as default.
                #- index.md  
                - about.md
        ```
    - The title for source files can assign through as key to the left of specified file 
        - Example:
            ``` text
                nav:
                    - Home: index.md
                    - User Guide:
                        - Writing your docs: writing-your-docs.md
                        - Styling your docs: styling-your-docs.md
                    - About:
                        - License: license.md
                        - Release Notes: release-notes.md
            ```
    - Any pages not listed in your navigation configuration will still be rendered and  
        included with the built site, however, they will not be linked from the global  
        navigation and will not be included in the previous and next links. Such pages  
        will be "hidden" unless linked to directly.
- `docs_dir`:  
    All paths in the navigation configuration must be relative to the `docs_dir` configuration option.  
    If that option is set to the default value `docs`,  
    the source files for the above configuration would be located at `docs/index.md` and `docs/about.md`.
- `site_dir`: default `site`
    ``` txt
    The directory where the output HTML and other files are created. This can either be a relative directory, in which case it is resolved relative to the directory containing your configuration file, or it can be an absolute directory path from the root of your local file system.
    ```

#### 3. YAML Style Meta-Data
- some of Meta-Data can define at top of each markdown file, follow below template:
    ```text
        ---
        title: My Document
        summary: A brief description of my document.
        authors:
            - Waylan Limberg
            - Tom Christie
        date: 2018-07-10
        some_url: https://example.com
        ---
        This is the first paragraph of the document.
    ```
- Some meta data key: template, title, summary, authors, date, some_url.
- All is lower case, parser using case sensitive.