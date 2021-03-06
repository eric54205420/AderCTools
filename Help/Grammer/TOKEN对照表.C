
    /*负数部分作为保留信息*/
    NONEVALUE                   =   -3,         // 没有值
    UNKNOW                      =   -2,         // 标识符的属性未知
    TOKEN_END                   =   -1,         // 结束的标志
    HEAD                        =   00,
    ARRAY                       =   01,
    FUNCTION                    =   02,         // 函数
    PARAMETERS                  =   03,         // 函数参数
    POINT                       =   04,         // 指针

    /// 标识符
    IDENTIFIER                  =   05,         // 标识符

    /*6 7 8 9 作为保留信息*/

    /// 关键字
    KEYWORD                     =   10,         // 关键字
    AUTO_KEYWORD                =   11,         // auto
    BREAK_KEYWORD               =   12,         // break
    CASE_KEYWORD                =   13,         // case
    CHAR_KEYWORD                =   14,         // char
    CONST_KEYWORD               =   15,         // const
    CONTINUE_KEYWORD            =   16,         // continue
    DEFAULT_KEYWORD             =   17,         // default
    DO_KEYWORD                  =   18,         // do
    DOUBLE_KEYWORD              =   19,         // double
    ELSE_KEYWORD                =   20,         // else
    ENUM_KEYWORD                =   21,         // enum
    EXTERN_KEYWORD              =   22,         // extern
    FLOAT_KEYWORD               =   23,         // float
    FOR_KEYWORD                 =   24,         // for
    GOTO_KEYWORD                =   25,         // goto
    IF_KEYWORD                  =   26,         // if
    INT_KEYWORD                 =   27,         // int
    LONG_KEYWORD                =   28,         // long
    REGISTER_KEYWORD            =   29,         // register
    RETURN_KEYWORD              =   30,         // return
    SHORT_KEYWORD               =   31,         // short
    SINNED_KEYWORD              =   32,         // signed
    SIZEOF_OPERATE              =   33,         // sizeof
    STATIC_KEYWORD              =   34,         // static
    STRUCT_KEYWORD              =   35,         // struct
    SWITCH_KEYWORD              =   36,         // switch
    TYPEDEF_KEYWORD             =   37,         // typedef
    UNION_KEYWORD               =   38,         // union
    UNSIGNED_KEYWORD            =   39,         // unsigned
    VOID_KEYWORD                =   40,         // void
    VOLATILE_KEYWORD            =   41,         // volatile
    WHILE_KEYWORD               =   42,         // while


    /// 运算符号
    OPERATE                     =   50,         // 运算符
    COMMA_OPERATE               =   51,         // ,    15-level
    ASSIGN_OPERATE              =   52,         // =    14-level
    ADD_ASSIGN_OPERATE          =   53,         // +=
    SUB_ASSIGN_OPERATE          =   54,         // -=
    MUL_ASSIGN_OPERATE          =   55,         // *=
    DIV_ASSIGN_OPERATE          =   56,         // /=                                 // /=
    MOD_ASSIGN_OPERATE          =   57,         // %=
    BITOR_ASSIGN_OPERATE        =   58,         // |=
    BITXOR_ASSIGN_OPERATE       =   59,         // ^=
    BITAND_ASSIGN_OPERATE       =   60,         // &=
    RSHIFRT_ASSIGN_OPERATE              =   61,         // >>=
    LSHIFT_ASSIGN_OPERATE               =   62,         // <<=
    QUESTION_OPERATE            =   63,         // ?    13-level
    COLON_OPERATE               =   64,         // :
    OR_OPERATE                  =   65,         // ||   12-level
    AND_OPERATE                 =   66,         // &&   11-level
    BITOR_OPERATE               =   67,         // |    10-level
    BITXOR_OPERATE              =   68,         // ^    09-level
    BITAND_OPERATE              =   69,         // &    08-level
    EQUAL_OPERATE               =   70,         // ==   07-level
    UNEQUAL_OPERATE             =   71,         // !=
    GREATER_OPERATE             =   72,         // >    06-level
    GREATER_EQUAL_OPERATE       =   73,         // >=
    LESS_OPERATE                =   74,         // <
    LESS_EQUAL_OPERATE          =   75,         // <=
    RSHIFT_OPERATE              =   76,         // >>   05-level
    LSHIFT_OPERATE              =   77,         // <<
    ADD_OPERATE                 =   78,         // +    04-level
    SUB_OPERATE                 =   79,         // -
    MUL_OPERATE                 =   80,         // *    03-level
    DIV_OPERATE                 =   81,         // /
    MOD_OPERATE                 =   82,         // %
    NOT_OPERATE                 =   83,         // !    02-level
    COMP_OPERATE                =   84,         // ~
                                                // 负号
    INC_OPERATE                 =   86,         // ++
    DEC_OPERATE                 =   87,         // --
                                                // 取地址&，取指针*，（type）类型转换，sizeof
    RPAREN_OPERATE              =   92,         // )    01-level
    LPAREN_OPERATE              =   91,         // (
    RBRACKET_OPERATE            =   94,         // ]
    LBRACKET_OPERATE            =   93,         // [
    DOT_OPERATE                 =   95,         // .
    POINT_TO_OPERATE            =   96,         // ->
    ELLIPSE_OPERATE             =   97,         // ...

    ///  分界符
    SEPARATOR                   =   100,        // 分界符
    LBRACE_SEPARATOR            =   101,        // {
    RBRACE_SEPARATOR            =   102,        // }
    SEMICOLON_SEPARATOR         =   103,        // ;
    POUND_SEPARATOR             =   104,        // #
    NEWLINE_SEPARATOR           =   105,        // \n
    ELLIPSE_SEPARATOR           =   106,        // ...

    /// 常量
    CONST                       =   110,        // 常数const
    INT_CONST                   =   111,        // 整形常量
    UINT_CONST                  =   112,        // 无符号整型常量
    LONG_CONST                  =   113,        // 长整型常量
    ULONG_CONST                 =   114,        // 无符号长整型常量
    LLONG_CONST                 =   115,        // 长长整形常量
    ULLONG_CONST                =   116,        // 无符号长整型常量
    FLOAT_CONSTANT              =   117,         // 浮点数常量
    DOUBLE_CONSTANT             =   118,         // 双精度浮点数常量
    LDOUBLE_CPNSTANT            =   119,         // 长型双精度浮点数常量
    CHAR_CONST                  =   110,         // 字符常量
    WCHAR_CONST                 =   111,         // 宽字符常量信息
    STRING_CONST                =   112,         // 字符串常量
    ENUM_CONST                  =   113,         // 枚举常量