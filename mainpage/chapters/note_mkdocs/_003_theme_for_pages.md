#### References
- Key code table: https://www.foreui.com/articles/Key_Code_Table.htm
- mkdoc theme:
    - Official: https://github.com/mkdocs/mkdocs/wiki/MkDocs-Themes
    - Third-party: https://github.com/mkdocs/catalog#-theming


## Choosing theme

In `mkdocs.yml`, some basic tag setting for theme can be specified (depend on theme using, more optional tag can be used):

```yaml
    theme:
        name: readthedocs
            # Download: 
            #   - [ pip install mkdocs-... ]
            #   - [ pip install ... ]
            # cinder, cluster, docskimmer,
            # material, windmill, windmill-dark
            # custommill, bootstrap, bootswatch
            # bootstrap386, readthedocs,
            # psinder, bootstrap4
            # gitbook, ivory, lantana
            # simple-blog, terminal


        color_mode: light # dark, auto
        user_color_mode_toggle: true # or false. En/disable toggle menu
        nav-style: primary # dark, light
        highlightjs: true # or false. En/disable highlight source in code block.
        hljs_style: github # defaul is github
        hljs_style_dark: github-dark # Change style when in dark mode.
        hljs_languages: # highlight some supported languages 
            - yaml
            - rust
        shortcuts:      # define short cut key on keyboard (see Key code table)
            help: 191       #/?
            next: 78        #n
            previous: 80    # p
            search: 83      # s
        navigation_depth: 2     # default display maximum depth of the navigation tree 
        locale: en      # language support for theme. If not support auto fallback to default designed theme locale.
        analytics:      # configuration options for an analytics service.
            gtag: G-ABC123  # enable Google Analytics. Using G- format.
```

