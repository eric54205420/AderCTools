#AderCTools
-------

AderCTools是一个简单的编译器工具, 

目前完成了如下工作

*   词法分析Lexical

*   语法分析Parser

*   代码插桩Prop

#结构
-------


| 目录 | 描述 |
|:-------:|:-------:|
| Config  | 配置文件, 存储了编译CTools工具的一些配置宏等信息 |
| Lexical | 词法分析器 |
| Parser  | 语法分析器, 使用SLR(1)语法分析进行, 并最终生成了一个抽象语法树 |
| Prop    | 基于语法分析的插桩器, 插桩器的工作是在源代码中插入一些探针<br>从而监测程序的执行路径等信息 |
| Tools   | 词法分析和语法分析过程中用到的一些工具信息, 比如双缓冲区buffer等 |
| Global  | 系统的全局入库地址, 词法分析和语法分析器以及插桩器的入口函数main都在这里 |
| .obj    | 系统编译过程中生成的目标文件的存放路径 |
| bin     | 存放可执行文件的目录 |



#How to make
-------


在代码的源目录

```c
make
```




