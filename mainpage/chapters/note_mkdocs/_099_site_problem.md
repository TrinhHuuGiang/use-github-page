## Some problems with MkDocs
When writing documents with MkDocs, here are some differences in display and configuration compared with some common Markdown viewer on VS code or third parties.

### Index
- [Nested list is treated as unique order/unorder list](#cant-display-right-nested-list)
- [Can't find resource file while coding raw HTML in markdown](#cant-find-resource-file-while-coding-raw-html-in-markdown)

<hr>

### Can't display right nested list

By default `Python Markdown` lib is used to translate Markdown files to HTML

Nested list: nested unordered list and ordered list (or reverse) sometimes are considered a single type of list.
```txt
    - a         |   1. a
    - b         |   1. b
        1. c    |       - c
        1. d    |       - d
```

Example the left above expected display of nested list: 1 ordered list is child of a element in unorder list
but result may showing like this; right example is similar with reversed case:
```txt
    - a         |   1. a
    - b         |   2. b
    - c         |   3. c
    - d         |   4. d
```

**Reason:** Trouble in switching tabs to spaces in text editors. `Python Markdown` requires each `tab == 4 space`

**Solution:**

1. using extension: https://github.com/squidfunk/mkdocs-material/discussions/8092
2. 4 space indent:
    - [git issue](https://github.com/squidfunk/mkdocs-material/issues/6509?issue=Python-Markdown%7Cmarkdown%7C451)
    - [fix default tab to space in VS code](https://stackoverflow.com/questions/29972396/how-can-i-customize-the-tab-to-space-conversion-factor-in-vs-code)


### Can't find resource file while coding raw HTML in markdown

MkDocs by default convert `markdown file` into `index.html` file inside `folder` with name similar to markdown file name.
```txt
    markdown.md inside folder A will convert into:
    A---markdown
        |---index.html
```

That make the link display with folder name instead of filename with tail `.html`. And modern websites are designed to use `clean URLs`, like that:
```txt
    http:// ... /doc/markdown/ 
```
The Web browser has merchanism automatically find `index.html` as default while URL is an folder. 

**Solution:**

- [see the issue](https://github.com/mkdocs/mkdocs/issues/991)
    1. Prepend extra `../` into resource link.  
    The limitation is it can't found right link on VS Code or some markdown parser. 
    2. Set `use_directory_urls=false` in `mkdocs.yml`  
    The limitation is generated files are `Markdown name + .html tail`