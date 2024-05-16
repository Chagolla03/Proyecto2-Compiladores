/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "ansic.y"

#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *s);
extern int yylex();
extern FILE* yyin;

#line 79 "ansic.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    CONSTANT = 259,                /* CONSTANT  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    SIZEOF = 261,                  /* SIZEOF  */
    PTR_OP = 262,                  /* PTR_OP  */
    INC_OP = 263,                  /* INC_OP  */
    DEC_OP = 264,                  /* DEC_OP  */
    LEFT_OP = 265,                 /* LEFT_OP  */
    RIGHT_OP = 266,                /* RIGHT_OP  */
    LE_OP = 267,                   /* LE_OP  */
    GE_OP = 268,                   /* GE_OP  */
    EQ_OP = 269,                   /* EQ_OP  */
    NE_OP = 270,                   /* NE_OP  */
    AND_OP = 271,                  /* AND_OP  */
    OR_OP = 272,                   /* OR_OP  */
    MUL_ASSIGN = 273,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 274,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 275,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 276,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 277,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 278,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 279,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 280,              /* AND_ASSIGN  */
    XOR_ASSIGN = 281,              /* XOR_ASSIGN  */
    OR_ASSIGN = 282,               /* OR_ASSIGN  */
    TYPE_NAME = 283,               /* TYPE_NAME  */
    TYPEDEF = 284,                 /* TYPEDEF  */
    EXTERN = 285,                  /* EXTERN  */
    STATIC = 286,                  /* STATIC  */
    AUTO = 287,                    /* AUTO  */
    REGISTER = 288,                /* REGISTER  */
    CHAR = 289,                    /* CHAR  */
    SHORT = 290,                   /* SHORT  */
    INT = 291,                     /* INT  */
    LONG = 292,                    /* LONG  */
    SIGNED = 293,                  /* SIGNED  */
    UNSIGNED = 294,                /* UNSIGNED  */
    FLOAT = 295,                   /* FLOAT  */
    DOUBLE = 296,                  /* DOUBLE  */
    CONST = 297,                   /* CONST  */
    VOLATILE = 298,                /* VOLATILE  */
    VOID = 299,                    /* VOID  */
    STRUCT = 300,                  /* STRUCT  */
    UNION = 301,                   /* UNION  */
    ENUM = 302,                    /* ENUM  */
    ELLIPSIS = 303,                /* ELLIPSIS  */
    CASE = 304,                    /* CASE  */
    DEFAULT = 305,                 /* DEFAULT  */
    IF = 306,                      /* IF  */
    ELSE = 307,                    /* ELSE  */
    SWITCH = 308,                  /* SWITCH  */
    WHILE = 309,                   /* WHILE  */
    DO = 310,                      /* DO  */
    FOR = 311,                     /* FOR  */
    GOTO = 312,                    /* GOTO  */
    CONTINUE = 313,                /* CONTINUE  */
    BREAK = 314,                   /* BREAK  */
    RETURN = 315,                  /* RETURN  */
    NOELSE = 316                   /* NOELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "ansic.y"

    struct {
		int ival;
		double dval;
		int valtype;
	};
	char *name;
	char *sval;
	char cval;

#line 201 "ansic.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 6,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 7,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 8,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 9,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 10,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 11,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 12,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 13,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 14,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 15,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 16,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 17,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 23,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 24,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 25,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 26,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 27,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 28,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_SHORT = 35,                     /* SHORT  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_CONST = 42,                     /* CONST  */
  YYSYMBOL_VOLATILE = 43,                  /* VOLATILE  */
  YYSYMBOL_VOID = 44,                      /* VOID  */
  YYSYMBOL_STRUCT = 45,                    /* STRUCT  */
  YYSYMBOL_UNION = 46,                     /* UNION  */
  YYSYMBOL_ENUM = 47,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 48,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 49,                      /* CASE  */
  YYSYMBOL_DEFAULT = 50,                   /* DEFAULT  */
  YYSYMBOL_IF = 51,                        /* IF  */
  YYSYMBOL_ELSE = 52,                      /* ELSE  */
  YYSYMBOL_SWITCH = 53,                    /* SWITCH  */
  YYSYMBOL_WHILE = 54,                     /* WHILE  */
  YYSYMBOL_DO = 55,                        /* DO  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_GOTO = 57,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_NOELSE = 61,                    /* NOELSE  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '+'  */
  YYSYMBOL_71_ = 71,                       /* '-'  */
  YYSYMBOL_72_ = 72,                       /* '~'  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '^'  */
  YYSYMBOL_79_ = 79,                       /* '|'  */
  YYSYMBOL_80_ = 80,                       /* '?'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* '='  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_primary_expression = 87,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 88,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 89,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 90,          /* unary_expression  */
  YYSYMBOL_unary_operator = 91,            /* unary_operator  */
  YYSYMBOL_cast_expression = 92,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 93, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 94,       /* additive_expression  */
  YYSYMBOL_shift_expression = 95,          /* shift_expression  */
  YYSYMBOL_relational_expression = 96,     /* relational_expression  */
  YYSYMBOL_equality_expression = 97,       /* equality_expression  */
  YYSYMBOL_and_expression = 98,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 99,   /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 100,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 101,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 102,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 103,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 104,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 105,      /* assignment_operator  */
  YYSYMBOL_expression = 106,               /* expression  */
  YYSYMBOL_constant_expression = 107,      /* constant_expression  */
  YYSYMBOL_declaration = 108,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 109,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 110,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 111,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 112,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 113,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 114, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 115,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 116,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 117,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 118, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 119,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 120,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 121,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 122,          /* enumerator_list  */
  YYSYMBOL_enumerator = 123,               /* enumerator  */
  YYSYMBOL_type_qualifier = 124,           /* type_qualifier  */
  YYSYMBOL_declarator = 125,               /* declarator  */
  YYSYMBOL_direct_declarator = 126,        /* direct_declarator  */
  YYSYMBOL_pointer = 127,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 128,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 129,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 130,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 131,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 132,          /* identifier_list  */
  YYSYMBOL_type_name = 133,                /* type_name  */
  YYSYMBOL_abstract_declarator = 134,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 135, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 136,              /* initializer  */
  YYSYMBOL_initializer_list = 137,         /* initializer_list  */
  YYSYMBOL_statement = 138,                /* statement  */
  YYSYMBOL_labeled_statement = 139,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 140,       /* compound_statement  */
  YYSYMBOL_declaration_list = 141,         /* declaration_list  */
  YYSYMBOL_statement_list = 142,           /* statement_list  */
  YYSYMBOL_expression_statement = 143,     /* expression_statement  */
  YYSYMBOL_selection_statement = 144,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 145,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 146,           /* jump_statement  */
  YYSYMBOL_translation_unit = 147,         /* translation_unit  */
  YYSYMBOL_external_declaration = 148,     /* external_declaration  */
  YYSYMBOL_function_definition = 149       /* function_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    41,    41,    42,    43,    44,    48,    49,    50,    51,
      52,    53,    54,    55,    59,    60,    64,    65,    66,    67,
      68,    69,    73,    74,    75,    76,    77,    78,    82,    83,
      87,    88,    89,    90,    94,    95,    96,   100,   101,   102,
     106,   107,   108,   109,   110,   114,   115,   116,   120,   121,
     125,   126,   130,   131,   135,   136,   140,   141,   145,   146,
     150,   151,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   169,   170,   174,   178,   179,   183,   184,
     185,   186,   187,   188,   192,   193,   197,   198,   202,   203,
     204,   205,   206,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   225,   226,   227,   231,   232,
     236,   237,   241,   245,   246,   247,   248,   252,   253,   257,
     258,   259,   263,   264,   265,   269,   270,   274,   275,   279,
     280,   284,   285,   289,   290,   291,   292,   293,   294,   295,
     299,   300,   301,   302,   306,   307,   312,   313,   317,   318,
     322,   323,   324,   328,   329,   333,   334,   338,   339,   340,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   356,
     357,   358,   362,   363,   367,   368,   369,   370,   371,   372,
     376,   377,   378,   382,   383,   384,   385,   389,   390,   394,
     395,   399,   400,   405,   406,   407,   411,   412,   413,   414,
     418,   419,   420,   421,   422,   426,   427,   431,   432,   436,
     437,   438,   439
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "NOELSE", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-221)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     940,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,     7,    19,    77,  -221,    42,  1230,  1230,  -221,    10,
    -221,  1230,  1074,    89,    11,   850,  -221,  -221,   -30,    61,
     -40,  -221,  -221,    77,  -221,   -39,  -221,  1054,  -221,  -221,
     -12,  1028,  -221,   278,  -221,    42,  -221,  1074,   409,   639,
      89,  -221,  -221,    61,   -31,   -42,  -221,  -221,  -221,  -221,
      19,  -221,   546,  -221,  1074,  1028,  1028,   976,  -221,   126,
    1028,    59,  -221,  -221,   767,   793,   793,   838,    62,    90,
      96,   131,   528,   134,   186,   120,   128,   563,   651,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   193,   274,
     838,  -221,   117,   164,   233,    73,   238,   153,   149,   157,
     215,    12,  -221,  -221,    20,  -221,  -221,  -221,   349,   420,
    -221,  -221,  -221,  -221,   151,  -221,  -221,  -221,  -221,    14,
     182,   187,  -221,   -33,  -221,  -221,  -221,  -221,   199,   -20,
     838,    61,  -221,  -221,   546,  -221,  -221,  -221,   996,  -221,
    -221,  -221,   838,    32,  -221,   177,  -221,   528,   651,  -221,
     838,  -221,  -221,   185,   528,   838,   838,   838,   213,   601,
     190,  -221,  -221,  -221,    45,    38,    13,   211,   273,  -221,
    -221,   672,   838,   275,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,   838,  -221,   838,   838,   838,
     838,   838,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   838,   838,   838,   838,   838,   838,  -221,  -221,   457,
    -221,  -221,   895,   722,  -221,     5,  -221,   118,  -221,  1209,
    -221,   282,  -221,  -221,  -221,  -221,  -221,    -6,  -221,  -221,
     126,  -221,   838,  -221,   214,   528,  -221,    43,    46,   127,
     226,   601,  -221,  -221,  -221,  1131,   154,  -221,   838,  -221,
    -221,   145,  -221,   163,  -221,  -221,  -221,  -221,  -221,   117,
     117,   164,   164,   233,   233,   233,   233,    73,    73,   238,
     153,   149,   157,   215,    66,  -221,  -221,  -221,   227,   228,
    -221,   224,   118,  1173,   743,  -221,  -221,  -221,   491,  -221,
    -221,  -221,  -221,  -221,   528,   528,   528,   838,   755,  -221,
    -221,   838,  -221,   838,  -221,  -221,  -221,  -221,   239,  -221,
     240,  -221,  -221,   252,  -221,  -221,   147,   528,   150,  -221,
    -221,  -221,  -221,   528,   243,  -221,   528,  -221,  -221,  -221
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   104,    88,    89,    90,    91,    92,    94,    95,
      96,    97,   100,   101,    98,    99,   129,   130,    93,   108,
     109,     0,     0,   140,   208,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   124,     0,
       0,   144,   142,   141,    76,     0,    84,    86,    79,    81,
     107,     0,    83,     0,   187,     0,   212,     0,     0,     0,
     131,     1,   206,     0,   127,     0,   125,   134,   145,   143,
       0,    77,     0,   210,     0,     0,   114,     0,   110,     0,
     116,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,   191,   183,     6,    16,    28,
       0,    30,    34,    37,    40,    45,    48,    50,    52,    54,
      56,    58,    60,    73,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,    86,   188,   211,   153,   139,   152,
       0,   146,   148,     0,     2,   136,    28,    75,     0,     0,
       0,     0,   122,    85,     0,   169,    87,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,     0,     0,    20,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,   203,     0,     0,   155,     0,     0,    12,
      13,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    62,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   185,     0,
     184,   190,     0,     0,   150,   157,   151,   158,   137,     0,
     138,     0,   135,   123,   128,   126,   172,     0,   105,   120,
       0,   112,     0,   180,     0,     0,   182,     0,     0,     0,
       0,     0,   200,   204,     5,     0,   157,   156,     0,    11,
       8,     0,    14,     0,    10,    61,    31,    32,    33,    35,
      36,    38,    39,    43,    44,    41,    42,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,     0,   170,
     118,   121,    21,   181,     0,     0,     0,     0,     0,    29,
       9,     0,     7,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,   193,   195,   196,     0,     0,     0,    15,
      59,   168,   164,     0,     0,   198,     0,   194,   197,   199
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,   -48,  -221,   -91,    37,    48,     8,
      52,   110,   121,   119,   116,   135,  -221,   -55,   -70,  -221,
     -38,   -54,     6,     0,  -221,   290,  -221,   -27,  -221,  -221,
     268,   -61,   -24,  -221,    94,  -221,   301,   194,    47,   -13,
     -29,    -3,  -221,   -57,  -221,   129,  -221,   197,  -118,  -220,
    -151,  -221,   -74,  -221,   152,    95,   241,  -172,  -221,  -221,
    -221,  -221,   331,  -221
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   107,   108,   271,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   205,
     124,   148,    54,    55,    45,    46,    26,    27,    28,    29,
      77,    78,    79,   163,   164,    30,    65,    66,    31,    32,
      33,    34,    43,   298,   141,   142,   143,   187,   299,   237,
     156,   247,   125,   126,   127,    57,   129,   130,   131,   132,
     133,    35,    36,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   140,   155,   246,   147,    60,    24,   261,     1,    40,
      38,   146,    47,    50,     1,   302,   161,     1,   178,   206,
      42,   236,     1,    67,    76,   151,    48,    49,    70,   224,
     240,    52,   147,   173,   241,    25,   169,   171,   172,   146,
      69,    24,   134,   152,    71,     1,   302,   151,    76,    76,
      76,   150,   159,    76,    63,   231,   166,   134,   139,   184,
     185,   308,   146,   135,    64,   243,   165,   232,   267,   233,
      41,    76,    75,    22,   186,   265,   232,   233,   233,   309,
     135,    22,    23,    23,   155,   214,   215,   226,    23,   318,
      68,    39,   225,   253,    51,   147,   244,   161,    80,   250,
     256,   264,   146,   227,    22,   226,   314,   147,   249,   315,
     226,    23,   226,   226,   146,   251,   276,   277,   278,    16,
      17,   272,    80,    80,    80,    44,   234,    80,   263,     1,
     185,    76,   185,   226,   135,   275,   235,   257,   258,   259,
     167,    76,    74,   174,   186,    80,    23,   323,   128,   216,
     217,    58,   175,    59,   273,   231,   295,   332,   176,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   319,   147,   301,
     303,   313,   304,   266,    56,   146,   207,   294,    22,   180,
     316,   208,   209,   177,   226,    23,   179,   147,   311,    73,
     188,   189,   190,   181,   146,    80,    60,   162,   320,   136,
     344,   182,   321,   346,   226,    80,   265,   226,   233,    40,
     146,   220,   283,   284,   285,   286,   157,   221,   322,   235,
     226,   223,   139,    72,   210,   211,   222,   165,   155,   139,
     333,   334,   335,   212,   213,   238,   328,   279,   280,   147,
     330,   339,   218,   219,   239,   191,   146,   192,   252,   193,
     281,   282,   266,   345,   242,   139,   255,   260,   340,   347,
     287,   288,   349,   262,   268,   146,   269,   312,   274,   336,
     338,    81,    82,    83,    84,   307,    85,    86,   317,   326,
     324,   325,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   341,   139,   343,   342,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   348,    87,    88,    89,
     289,    90,    91,    92,    93,    94,    95,    96,    97,   292,
      98,   291,   290,   158,   310,   245,    99,   100,   101,   102,
     103,   104,    81,    82,    83,    84,   204,    85,    86,   293,
     153,   105,    53,   106,   149,   254,    62,     0,   306,   229,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    87,    88,
      89,     0,    90,    91,    92,    93,    94,    95,    96,    97,
       0,    98,   137,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,    81,    82,    83,    84,     0,    85,    86,
       0,     0,   105,    53,   228,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      81,    82,    83,    84,     0,    85,    86,     0,     0,    87,
      88,    89,   138,    90,    91,    92,    93,    94,    95,    96,
      97,     0,    98,     0,     0,     0,     0,     0,    99,   100,
     101,   102,   103,   104,   144,    82,    83,    84,     0,    85,
      86,     0,     0,   105,    53,   230,    87,    88,    89,     0,
      90,    91,    92,    93,    94,    95,    96,    97,     0,    98,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,    81,    82,    83,    84,     0,    85,    86,     0,     0,
     105,    53,   296,     0,     0,     0,     0,     0,     0,   144,
      82,    83,    84,    98,    85,    86,     0,     0,     0,    99,
     100,   101,   102,   103,   104,     0,   144,    82,    83,    84,
       0,    85,    86,     0,     0,   154,   331,    87,    88,    89,
       0,    90,    91,    92,    93,    94,    95,    96,    97,     0,
      98,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,     0,     0,   144,    82,    83,    84,    98,    85,
      86,   105,    53,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,    98,     0,     0,     0,     0,
     154,    99,   100,   101,   102,   103,   104,     0,     0,     0,
       0,     0,   144,    82,    83,    84,   183,    85,    86,     0,
       0,     0,     0,     0,   144,    82,    83,    84,     0,    85,
      86,     0,     0,    98,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   144,    82,    83,    84,     2,
      85,    86,     0,     0,   105,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,    98,     0,     0,   145,     0,     0,    99,   100,   101,
     102,   103,   104,    98,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   144,    82,    83,    84,     0,
      85,    86,     0,     0,    98,   270,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,   144,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,   144,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
     144,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,   300,     0,     0,
      99,   100,   101,   102,   103,   104,   144,    82,    83,    84,
       0,    85,    86,     0,     0,    98,     0,     0,   329,     0,
       0,    99,   100,   101,   102,   103,   104,    98,   337,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   168,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   144,    82,    83,    84,     0,    85,    86,     0,     0,
      61,     0,     0,     1,     0,   170,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     1,     0,
      98,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,    22,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,   297,   233,
       0,     0,     0,     0,    23,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     2,     0,     0,     0,     0,    23,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     2,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,   160,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,   248,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,   297,   233,     0,     0,     0,     0,
      23,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   327,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   305,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    58,    72,   154,    59,    34,     0,   179,     3,    22,
       3,    59,    25,     3,     3,   235,    77,     3,    92,   110,
      23,   139,     3,    63,    51,    67,    26,    27,    67,    17,
      63,    31,    87,    87,    67,    35,    84,    85,    86,    87,
      43,    35,    55,    85,    83,     3,   266,    67,    75,    76,
      77,    82,    76,    80,    84,   129,    80,    70,    58,    97,
      98,    67,   110,    57,     3,    85,    79,    62,   186,    64,
      23,    98,    84,    62,    98,    62,    62,    64,    64,    85,
      74,    62,    69,    69,   154,    12,    13,    67,    69,   261,
      43,    84,    80,   167,    84,   150,   150,   158,    51,    67,
     174,    63,   150,    83,    62,    67,    63,   162,   162,    63,
      67,    69,    67,    67,   162,    83,   207,   208,   209,    42,
      43,   191,    75,    76,    77,    83,   139,    80,    83,     3,
     168,   158,   170,    67,   128,   205,   139,   175,   176,   177,
      81,   168,    47,    81,   168,    98,    69,    81,    53,    76,
      77,    62,    62,    64,   192,   229,   226,   308,    62,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   268,   233,   233,
      62,   255,    64,   186,    32,   233,    69,   225,    62,     3,
      63,    74,    75,    62,    67,    69,    62,   252,   252,    47,
       7,     8,     9,    83,   252,   158,   235,    81,    63,    57,
      63,    83,    67,    63,    67,   168,    62,    67,    64,   232,
     268,    68,   214,   215,   216,   217,    74,    78,    65,   232,
      67,    16,   232,    82,    70,    71,    79,   250,   308,   239,
     314,   315,   316,    10,    11,    63,   303,   210,   211,   304,
     304,   321,    14,    15,    67,    62,   304,    64,    81,    66,
     212,   213,   265,   337,    65,   265,    81,    54,   323,   343,
     218,   219,   346,    83,    63,   323,     3,    63,     3,   317,
     318,     3,     4,     5,     6,     3,     8,     9,    62,    65,
      63,    63,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    63,   303,    52,    65,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    83,    49,    50,    51,
     220,    53,    54,    55,    56,    57,    58,    59,    60,   223,
      62,   222,   221,    75,   250,   151,    68,    69,    70,    71,
      72,    73,     3,     4,     5,     6,    82,     8,     9,   224,
      70,    83,    84,    85,    63,   168,    35,    -1,   239,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,     3,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    83,    84,    85,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    49,
      50,    51,    63,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    83,    84,    85,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    62,     8,     9,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    84,    85,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    -1,    -1,     3,     4,     5,     6,    62,     8,
       9,    83,    84,    -1,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      84,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    83,     8,     9,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,     3,     4,     5,     6,    28,
       8,     9,    -1,    -1,    83,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    62,    -1,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    72,    73,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,
      68,    69,    70,    71,    72,    73,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    62,    -1,    -1,    65,    -1,
      -1,    68,    69,    70,    71,    72,    73,    62,    63,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
       0,    -1,    -1,     3,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     3,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    28,    -1,    -1,    -1,    -1,    69,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    28,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    85,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    85,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    62,    69,   108,   109,   112,   113,   114,   115,
     121,   124,   125,   126,   127,   147,   148,   149,     3,    84,
     125,   124,   127,   128,    83,   110,   111,   125,   109,   109,
       3,    84,   109,    84,   108,   109,   140,   141,    62,    64,
     126,     0,   148,    84,     3,   122,   123,    63,   124,   127,
      67,    83,    82,   140,   141,    84,   113,   116,   117,   118,
     124,     3,     4,     5,     6,     8,     9,    49,    50,    51,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    68,
      69,    70,    71,    72,    73,    83,    85,    87,    88,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   106,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   125,   108,   140,     3,    63,   109,
     129,   130,   131,   132,     3,    65,    90,   103,   107,   122,
      82,    67,    85,   111,    84,   104,   136,   140,   116,   118,
      85,   117,    81,   119,   120,   125,   118,    81,    62,    90,
      62,    90,    90,   107,    81,    62,    62,    62,   138,    62,
       3,    83,    83,    83,   106,   106,   118,   133,     7,     8,
       9,    62,    64,    66,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    82,   105,    92,    69,    74,    75,
      70,    71,    10,    11,    12,    13,    76,    77,    14,    15,
      68,    78,    79,    16,    17,    80,    67,    83,    85,   142,
      85,   138,    62,    64,   125,   127,   134,   135,    63,    67,
      63,    67,    65,    85,   107,   123,   136,   137,    85,   107,
      67,    83,    81,   138,   133,    81,   138,   106,   106,   106,
      54,   143,    83,    83,    63,    62,   127,   134,    63,     3,
      63,    89,   104,   106,     3,   104,    92,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    97,
      98,    99,   100,   101,   106,   104,    85,    63,   129,   134,
      65,   107,   135,    62,    64,    48,   131,     3,    67,    85,
     120,   107,    63,   138,    63,    63,    63,    62,   143,    92,
      63,    67,    65,    81,    63,    63,    65,    63,   129,    65,
     107,    85,   136,   138,   138,   138,   106,    63,   106,   104,
     103,    63,    65,    52,    63,   138,    63,   138,    83,   138
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   114,   115,   115,
     116,   116,   117,   118,   118,   118,   118,   119,   119,   120,
     120,   120,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   136,   137,   137,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   144,   145,   145,   145,   145,
     146,   146,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 41 "ansic.y"
                                        {printf("primary_expression: IDENTIFIER\n");}
#line 1785 "ansic.tab.c"
    break;

  case 3: /* primary_expression: CONSTANT  */
#line 42 "ansic.y"
                                                {printf("primary_expression: CONSTANT\n");}
#line 1791 "ansic.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 43 "ansic.y"
                                        {printf("primary_expression: STRING_LITERAL\n");}
#line 1797 "ansic.tab.c"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 44 "ansic.y"
                                {printf("primary_expression: '(' expression ')'\n");}
#line 1803 "ansic.tab.c"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 48 "ansic.y"
                                                                                                        {printf("postfix_expression: primary_expression\n");}
#line 1809 "ansic.tab.c"
    break;

  case 7: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 49 "ansic.y"
                                                                                        {printf("postfix_expression: postfix_expression '[' expression ']'	\n");}
#line 1815 "ansic.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression '(' ')'  */
#line 50 "ansic.y"
                                                                                                {printf("postfix_expression: postfix_expression '(' ')'\n");}
#line 1821 "ansic.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 51 "ansic.y"
                                                                        {printf("postfix_expression: postfix_expression '(' argument_expression_list ')'\n");}
#line 1827 "ansic.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 52 "ansic.y"
                                                                                                {printf("postfix_expression: postfix_expression '.' IDENTIFIER\n");}
#line 1833 "ansic.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 53 "ansic.y"
                                                                                        {printf("postfix_expression: postfix_expression PTR_OP IDENTIFIER\n");}
#line 1839 "ansic.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INC_OP  */
#line 54 "ansic.y"
                                                                                                        {printf("postfix_expression: postfix_expression INC_OP	\n");}
#line 1845 "ansic.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DEC_OP  */
#line 55 "ansic.y"
                                                                                                        {printf("postfix_expression: postfix_expression DEC_OP\n");}
#line 1851 "ansic.tab.c"
    break;

  case 14: /* argument_expression_list: assignment_expression  */
#line 59 "ansic.y"
                                                                                                {printf("argument_expression_list: assignment_expression\n");}
#line 1857 "ansic.tab.c"
    break;

  case 15: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 60 "ansic.y"
                                                                {printf("argument_expression_list: argument_expression_list ',' assignment_expression\n");}
#line 1863 "ansic.tab.c"
    break;

  case 16: /* unary_expression: postfix_expression  */
#line 64 "ansic.y"
                                                        {printf("unary_expression: postfix_expression\n");}
#line 1869 "ansic.tab.c"
    break;

  case 17: /* unary_expression: INC_OP unary_expression  */
#line 65 "ansic.y"
                                                        {printf("unary_expression: INC_OP unary_expression\n");}
#line 1875 "ansic.tab.c"
    break;

  case 18: /* unary_expression: DEC_OP unary_expression  */
#line 66 "ansic.y"
                                                        {printf("unary_expression: DEC_OP unary_expression\n");}
#line 1881 "ansic.tab.c"
    break;

  case 19: /* unary_expression: unary_operator cast_expression  */
#line 67 "ansic.y"
                                                {printf("unary_expression: unary_operator cast_expression\n");}
#line 1887 "ansic.tab.c"
    break;

  case 20: /* unary_expression: SIZEOF unary_expression  */
#line 68 "ansic.y"
                                                        {printf("unary_expression: SIZEOF unary_expression\n");}
#line 1893 "ansic.tab.c"
    break;

  case 21: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 69 "ansic.y"
                                                        {printf("unary_expression: SIZEOF '(' type_name ')'\n");}
#line 1899 "ansic.tab.c"
    break;

  case 22: /* unary_operator: '&'  */
#line 73 "ansic.y"
                                {printf("unary_operator: '&'\n");}
#line 1905 "ansic.tab.c"
    break;

  case 23: /* unary_operator: '*'  */
#line 74 "ansic.y"
                                {printf("unary_operator: '*'\n");}
#line 1911 "ansic.tab.c"
    break;

  case 24: /* unary_operator: '+'  */
#line 75 "ansic.y"
                                {printf("unary_operator: '+'\n");}
#line 1917 "ansic.tab.c"
    break;

  case 25: /* unary_operator: '-'  */
#line 76 "ansic.y"
                                {printf("unary_operator: '-'\n");}
#line 1923 "ansic.tab.c"
    break;

  case 26: /* unary_operator: '~'  */
#line 77 "ansic.y"
                                {printf("unary_operator: '~'\n");}
#line 1929 "ansic.tab.c"
    break;

  case 27: /* unary_operator: '!'  */
#line 78 "ansic.y"
                                {printf("unary_operator: '!'\n");}
#line 1935 "ansic.tab.c"
    break;

  case 28: /* cast_expression: unary_expression  */
#line 82 "ansic.y"
                                                                        {printf("cast_expression: unary_expression\n");}
#line 1941 "ansic.tab.c"
    break;

  case 29: /* cast_expression: '(' type_name ')' cast_expression  */
#line 83 "ansic.y"
                                                        {printf("cast_expression: '(' type_name ')' cast_expression\n");}
#line 1947 "ansic.tab.c"
    break;

  case 30: /* multiplicative_expression: cast_expression  */
#line 87 "ansic.y"
                                                                                                {printf("multiplicative_expression: cast_expression\n");}
#line 1953 "ansic.tab.c"
    break;

  case 31: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 88 "ansic.y"
                                                                {printf("multiplicative_expression: multiplicative_expression '*' cast_expression\n");}
#line 1959 "ansic.tab.c"
    break;

  case 32: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 89 "ansic.y"
                                                                {printf("multiplicative_expression: multiplicative_expression '/' cast_expression\n");}
#line 1965 "ansic.tab.c"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 90 "ansic.y"
                                                                {printf("multiplicative_expression: multiplicative_expression '%' cast_expression\n");}
#line 1971 "ansic.tab.c"
    break;

  case 34: /* additive_expression: multiplicative_expression  */
#line 94 "ansic.y"
                                                                                                {printf("additive_expression: multiplicative_expression\n");}
#line 1977 "ansic.tab.c"
    break;

  case 35: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 95 "ansic.y"
                                                                        {printf("additive_expression: additive_expression '+' multiplicative_expression\n");}
#line 1983 "ansic.tab.c"
    break;

  case 36: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 96 "ansic.y"
                                                                        {printf("additive_expression: additive_expression '-' multiplicative_expression\n");}
#line 1989 "ansic.tab.c"
    break;

  case 37: /* shift_expression: additive_expression  */
#line 100 "ansic.y"
                                                                                        {printf("shift_expression: additive_expression\n");}
#line 1995 "ansic.tab.c"
    break;

  case 38: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 101 "ansic.y"
                                                                {printf("shift_expression: shift_expression LEFT_OP additive_expression\n");}
#line 2001 "ansic.tab.c"
    break;

  case 39: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 102 "ansic.y"
                                                                {printf("shift_expression: shift_expression RIGHT_OP additive_expression\n");}
#line 2007 "ansic.tab.c"
    break;

  case 40: /* relational_expression: shift_expression  */
#line 106 "ansic.y"
                                                                                                {printf("relational_expression: shift_expression\n");}
#line 2013 "ansic.tab.c"
    break;

  case 41: /* relational_expression: relational_expression '<' shift_expression  */
#line 107 "ansic.y"
                                                                {printf("relational_expression: relational_expression '<' shift_expression\n");}
#line 2019 "ansic.tab.c"
    break;

  case 42: /* relational_expression: relational_expression '>' shift_expression  */
#line 108 "ansic.y"
                                                                {printf("relational_expression: relational_expression '>' shift_expression\n");}
#line 2025 "ansic.tab.c"
    break;

  case 43: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 109 "ansic.y"
                                                                {printf("relational_expression: relational_expression LE_OP shift_expression\n");}
#line 2031 "ansic.tab.c"
    break;

  case 44: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 110 "ansic.y"
                                                                {printf("relational_expression: relational_expression GE_OP shift_expression\n");}
#line 2037 "ansic.tab.c"
    break;

  case 45: /* equality_expression: relational_expression  */
#line 114 "ansic.y"
                                                                                                {printf("equality_expression: relational_expression\n");}
#line 2043 "ansic.tab.c"
    break;

  case 46: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 115 "ansic.y"
                                                                        {printf("equality_expression: equality_expression EQ_OP relational_expression\n");}
#line 2049 "ansic.tab.c"
    break;

  case 47: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 116 "ansic.y"
                                                                        {printf("equality_expression: equality_expression NE_OP relational_expression\n");}
#line 2055 "ansic.tab.c"
    break;

  case 48: /* and_expression: equality_expression  */
#line 120 "ansic.y"
                                                                                {printf("and_expression: equality_expression\n");}
#line 2061 "ansic.tab.c"
    break;

  case 49: /* and_expression: and_expression '&' equality_expression  */
#line 121 "ansic.y"
                                                                {printf("and_expression: and_expression '&' equality_expression\n");}
#line 2067 "ansic.tab.c"
    break;

  case 50: /* exclusive_or_expression: and_expression  */
#line 125 "ansic.y"
                                                                                                {printf("exclusive_or_expression: and_expression\n");}
#line 2073 "ansic.tab.c"
    break;

  case 51: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 126 "ansic.y"
                                                                {printf("exclusive_or_expression: exclusive_or_expression '^' and_expression\n");}
#line 2079 "ansic.tab.c"
    break;

  case 52: /* inclusive_or_expression: exclusive_or_expression  */
#line 130 "ansic.y"
                                                                                                {printf("inclusive_or_expression: exclusive_or_expression\n");}
#line 2085 "ansic.tab.c"
    break;

  case 53: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 131 "ansic.y"
                                                                {printf("inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression\n");}
#line 2091 "ansic.tab.c"
    break;

  case 54: /* logical_and_expression: inclusive_or_expression  */
#line 135 "ansic.y"
                                                                                                        {printf("logical_and_expression: inclusive_or_expression\n");}
#line 2097 "ansic.tab.c"
    break;

  case 55: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 136 "ansic.y"
                                                                        {printf("logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n");}
#line 2103 "ansic.tab.c"
    break;

  case 56: /* logical_or_expression: logical_and_expression  */
#line 140 "ansic.y"
                                                                                                        {printf("logical_or_expression: logical_and_expression\n");}
#line 2109 "ansic.tab.c"
    break;

  case 57: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 141 "ansic.y"
                                                                        {printf("logical_or_expression: logical_or_expression OR_OP logical_and_expression\n");}
#line 2115 "ansic.tab.c"
    break;

  case 58: /* conditional_expression: logical_or_expression  */
#line 145 "ansic.y"
                                                                                                                        {printf("conditional_expression: logical_or_expression\n");}
#line 2121 "ansic.tab.c"
    break;

  case 59: /* conditional_expression: logical_or_expression '?' expression ':' conditional_expression  */
#line 146 "ansic.y"
                                                                                {printf("conditional_expression: logical_or_expression '?' expression ':' conditional_expression\n");}
#line 2127 "ansic.tab.c"
    break;

  case 60: /* assignment_expression: conditional_expression  */
#line 150 "ansic.y"
                                                                                                                {printf("assignment_expression: conditional_expression\n");}
#line 2133 "ansic.tab.c"
    break;

  case 61: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 151 "ansic.y"
                                                                        {printf("assignment_expression: unary_expression assignment_operator assignment_expression\n");}
#line 2139 "ansic.tab.c"
    break;

  case 62: /* assignment_operator: '='  */
#line 155 "ansic.y"
                                        {printf("assignment_operator: '='\n");}
#line 2145 "ansic.tab.c"
    break;

  case 63: /* assignment_operator: MUL_ASSIGN  */
#line 156 "ansic.y"
                                {printf("assignment_operator: MUL_ASSIGN\n");}
#line 2151 "ansic.tab.c"
    break;

  case 64: /* assignment_operator: DIV_ASSIGN  */
#line 157 "ansic.y"
                                {printf("assignment_operator: DIV_ASSIGN\n");}
#line 2157 "ansic.tab.c"
    break;

  case 65: /* assignment_operator: MOD_ASSIGN  */
#line 158 "ansic.y"
                                {printf("assignment_operator: MOD_ASSIGN\n");}
#line 2163 "ansic.tab.c"
    break;

  case 66: /* assignment_operator: ADD_ASSIGN  */
#line 159 "ansic.y"
                                {printf("assignment_operator: ADD_ASSIGN\n");}
#line 2169 "ansic.tab.c"
    break;

  case 67: /* assignment_operator: SUB_ASSIGN  */
#line 160 "ansic.y"
                                {printf("assignment_operator: SUB_ASSIGN\n");}
#line 2175 "ansic.tab.c"
    break;

  case 68: /* assignment_operator: LEFT_ASSIGN  */
#line 161 "ansic.y"
                                {printf("assignment_operator: LEFT_ASSIGN\n");}
#line 2181 "ansic.tab.c"
    break;

  case 69: /* assignment_operator: RIGHT_ASSIGN  */
#line 162 "ansic.y"
                                {printf("assignment_operator: RIGHT_ASSIGN\n");}
#line 2187 "ansic.tab.c"
    break;

  case 70: /* assignment_operator: AND_ASSIGN  */
#line 163 "ansic.y"
                                {printf("assignment_operator: AND_ASSIGN\n");}
#line 2193 "ansic.tab.c"
    break;

  case 71: /* assignment_operator: XOR_ASSIGN  */
#line 164 "ansic.y"
                                {printf("assignment_operator: XOR_ASSIGN\n");}
#line 2199 "ansic.tab.c"
    break;

  case 72: /* assignment_operator: OR_ASSIGN  */
#line 165 "ansic.y"
                                        {printf("assignment_operator: OR_ASSIGN\n");}
#line 2205 "ansic.tab.c"
    break;

  case 73: /* expression: assignment_expression  */
#line 169 "ansic.y"
                                                                        {printf("expression: assignment_expression\n");}
#line 2211 "ansic.tab.c"
    break;

  case 74: /* expression: expression ',' assignment_expression  */
#line 170 "ansic.y"
                                                        {printf("expression: expression ',' assignment_expression\n");}
#line 2217 "ansic.tab.c"
    break;

  case 75: /* constant_expression: conditional_expression  */
#line 174 "ansic.y"
                                                                        {printf("constant_expression: conditional_expression\n");}
#line 2223 "ansic.tab.c"
    break;

  case 76: /* declaration: declaration_specifiers ';'  */
#line 178 "ansic.y"
                                                                                {printf("declaration: declaration_specifiers ';'\n");}
#line 2229 "ansic.tab.c"
    break;

  case 77: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 179 "ansic.y"
                                                                {printf("declaration: declaration_specifiers init_declarator_list ';'\n");}
#line 2235 "ansic.tab.c"
    break;

  case 78: /* declaration_specifiers: storage_class_specifier  */
#line 183 "ansic.y"
                                                                                        {printf("declaration_specifiers: storage_class_specifier\n");}
#line 2241 "ansic.tab.c"
    break;

  case 79: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 184 "ansic.y"
                                                                {printf("declaration_specifiers: storage_class_specifier declaration_specifiers\n");}
#line 2247 "ansic.tab.c"
    break;

  case 80: /* declaration_specifiers: type_specifier  */
#line 185 "ansic.y"
                                                                                                {printf("declaration_specifiers: type_specifier\n");}
#line 2253 "ansic.tab.c"
    break;

  case 81: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 186 "ansic.y"
                                                                        {printf("declaration_specifiers: type_specifier declaration_specifiers\n");}
#line 2259 "ansic.tab.c"
    break;

  case 82: /* declaration_specifiers: type_qualifier  */
#line 187 "ansic.y"
                                                                                                {printf("declaration_specifiers: type_qualifier\n");}
#line 2265 "ansic.tab.c"
    break;

  case 83: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 188 "ansic.y"
                                                                        {printf("declaration_specifiers: type_qualifier declaration_specifiers\n");}
#line 2271 "ansic.tab.c"
    break;

  case 84: /* init_declarator_list: init_declarator  */
#line 192 "ansic.y"
                                                                                        {printf("init_declarator_list: init_declarator\n");}
#line 2277 "ansic.tab.c"
    break;

  case 85: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 193 "ansic.y"
                                                                {printf("init_declarator_list: init_declarator_list ',' init_declarator\n");}
#line 2283 "ansic.tab.c"
    break;

  case 86: /* init_declarator: declarator  */
#line 197 "ansic.y"
                                                        {printf("init_declarator: declarator\n");}
#line 2289 "ansic.tab.c"
    break;

  case 87: /* init_declarator: declarator '=' initializer  */
#line 198 "ansic.y"
                                        {printf("init_declarator: declarator '=' initializer\n");}
#line 2295 "ansic.tab.c"
    break;

  case 88: /* storage_class_specifier: TYPEDEF  */
#line 202 "ansic.y"
                                                {printf("storage_class_specifier: TYPEDEF\n");}
#line 2301 "ansic.tab.c"
    break;

  case 89: /* storage_class_specifier: EXTERN  */
#line 203 "ansic.y"
                                                {printf("storage_class_specifier: EXTERN\n");}
#line 2307 "ansic.tab.c"
    break;

  case 90: /* storage_class_specifier: STATIC  */
#line 204 "ansic.y"
                                                {printf("storage_class_specifier: STATIC\n");}
#line 2313 "ansic.tab.c"
    break;

  case 91: /* storage_class_specifier: AUTO  */
#line 205 "ansic.y"
                                                {printf("storage_class_specifier: AUTO\n");}
#line 2319 "ansic.tab.c"
    break;

  case 92: /* storage_class_specifier: REGISTER  */
#line 206 "ansic.y"
                                                {printf("storage_class_specifier: REGISTER\n");}
#line 2325 "ansic.tab.c"
    break;

  case 93: /* type_specifier: VOID  */
#line 210 "ansic.y"
                                                                {printf("type_specifier: VOID\n");}
#line 2331 "ansic.tab.c"
    break;

  case 94: /* type_specifier: CHAR  */
#line 211 "ansic.y"
                                                                {printf("type_specifier: CHAR\n");}
#line 2337 "ansic.tab.c"
    break;

  case 95: /* type_specifier: SHORT  */
#line 212 "ansic.y"
                                                                {printf("type_specifier: SHORT\n");}
#line 2343 "ansic.tab.c"
    break;

  case 96: /* type_specifier: INT  */
#line 213 "ansic.y"
                                                                {printf("type_specifier: INT\n");}
#line 2349 "ansic.tab.c"
    break;

  case 97: /* type_specifier: LONG  */
#line 214 "ansic.y"
                                                                {printf("type_specifier: LONG\n");}
#line 2355 "ansic.tab.c"
    break;

  case 98: /* type_specifier: FLOAT  */
#line 215 "ansic.y"
                                                                {printf("type_specifier: FLOAT\n");}
#line 2361 "ansic.tab.c"
    break;

  case 99: /* type_specifier: DOUBLE  */
#line 216 "ansic.y"
                                                                {printf("type_specifier: DOUBLE\n");}
#line 2367 "ansic.tab.c"
    break;

  case 100: /* type_specifier: SIGNED  */
#line 217 "ansic.y"
                                                                {printf("type_specifier: SIGNED\n");}
#line 2373 "ansic.tab.c"
    break;

  case 101: /* type_specifier: UNSIGNED  */
#line 218 "ansic.y"
                                                                {printf("type_specifier: UNSIGNED\n");}
#line 2379 "ansic.tab.c"
    break;

  case 102: /* type_specifier: struct_or_union_specifier  */
#line 219 "ansic.y"
                                                {printf("type_specifier: struct_or_union_specifier\n");}
#line 2385 "ansic.tab.c"
    break;

  case 103: /* type_specifier: enum_specifier  */
#line 220 "ansic.y"
                                                        {printf("type_specifier: enum_specifier\n");}
#line 2391 "ansic.tab.c"
    break;

  case 104: /* type_specifier: TYPE_NAME  */
#line 221 "ansic.y"
                                                                {printf("type_specifier: TYPE_NAME\n");}
#line 2397 "ansic.tab.c"
    break;

  case 105: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 225 "ansic.y"
                                                                        {printf("struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'\n");}
#line 2403 "ansic.tab.c"
    break;

  case 106: /* struct_or_union_specifier: struct_or_union '{' struct_declaration_list '}'  */
#line 226 "ansic.y"
                                                                                        {printf("struct_or_union_specifier: struct_or_union '{' struct_declaration_list '}'\n");}
#line 2409 "ansic.tab.c"
    break;

  case 107: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 227 "ansic.y"
                                                                                                        {printf("struct_or_union_specifier: struct_or_union IDENTIFIER\n");}
#line 2415 "ansic.tab.c"
    break;

  case 108: /* struct_or_union: STRUCT  */
#line 231 "ansic.y"
                                {printf("struct_or_union: STRUCT\n");}
#line 2421 "ansic.tab.c"
    break;

  case 109: /* struct_or_union: UNION  */
#line 232 "ansic.y"
                                {printf("struct_or_union: UNION\n");}
#line 2427 "ansic.tab.c"
    break;

  case 110: /* struct_declaration_list: struct_declaration  */
#line 236 "ansic.y"
                                                                                {printf("struct_declaration_list: struct_declaration\n");}
#line 2433 "ansic.tab.c"
    break;

  case 111: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 237 "ansic.y"
                                                        {printf("struct_declaration_list: struct_declaration_list struct_declaration\n");}
#line 2439 "ansic.tab.c"
    break;

  case 112: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 241 "ansic.y"
                                                                {printf("struct_declaration: specifier_qualifier_list struct_declarator_list ';'\n");}
#line 2445 "ansic.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 245 "ansic.y"
                                                                {printf("specifier_qualifier_list: type_specifier specifier_qualifier_list\n");}
#line 2451 "ansic.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier  */
#line 246 "ansic.y"
                                                                                        {printf("specifier_qualifier_list: type_specifier\n");}
#line 2457 "ansic.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 247 "ansic.y"
                                                                {printf("specifier_qualifier_list: type_qualifier specifier_qualifier_list\n");}
#line 2463 "ansic.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier  */
#line 248 "ansic.y"
                                                                                        {printf("specifier_qualifier_list: type_qualifier\n");}
#line 2469 "ansic.tab.c"
    break;

  case 117: /* struct_declarator_list: struct_declarator  */
#line 252 "ansic.y"
                                                                                                {printf("struct_declarator_list: struct_declarator\n");}
#line 2475 "ansic.tab.c"
    break;

  case 118: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 253 "ansic.y"
                                                                {printf("struct_declarator_list: struct_declarator_list ',' struct_declarator\n");}
#line 2481 "ansic.tab.c"
    break;

  case 119: /* struct_declarator: declarator  */
#line 257 "ansic.y"
                                                                        {printf("struct_declarator: declarator\n");}
#line 2487 "ansic.tab.c"
    break;

  case 120: /* struct_declarator: ':' constant_expression  */
#line 258 "ansic.y"
                                                                {printf("struct_declarator: ':' constant_expression\n");}
#line 2493 "ansic.tab.c"
    break;

  case 121: /* struct_declarator: declarator ':' constant_expression  */
#line 259 "ansic.y"
                                                {printf("struct_declarator: declarator ':' constant_expression\n");}
#line 2499 "ansic.tab.c"
    break;

  case 122: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 263 "ansic.y"
                                                                        {printf("enum_specifier: ENUM '{' enumerator_list '}'\n");}
#line 2505 "ansic.tab.c"
    break;

  case 123: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 264 "ansic.y"
                                                                {printf("enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'\n");}
#line 2511 "ansic.tab.c"
    break;

  case 124: /* enum_specifier: ENUM IDENTIFIER  */
#line 265 "ansic.y"
                                                                                        {printf("enum_specifier: ENUM IDENTIFIER\n");}
#line 2517 "ansic.tab.c"
    break;

  case 125: /* enumerator_list: enumerator  */
#line 269 "ansic.y"
                                                                        {printf("enumerator_list: enumerator\n");}
#line 2523 "ansic.tab.c"
    break;

  case 126: /* enumerator_list: enumerator_list ',' enumerator  */
#line 270 "ansic.y"
                                                        {printf("enumerator_list: enumerator_list ',' enumerator\n");}
#line 2529 "ansic.tab.c"
    break;

  case 127: /* enumerator: IDENTIFIER  */
#line 274 "ansic.y"
                                                                        {printf("enumerator: IDENTIFIER\n");}
#line 2535 "ansic.tab.c"
    break;

  case 128: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 275 "ansic.y"
                                                {printf("enumerator: IDENTIFIER '=' constant_expression\n");}
#line 2541 "ansic.tab.c"
    break;

  case 129: /* type_qualifier: CONST  */
#line 279 "ansic.y"
                                        {printf("type_qualifier: CONST\n");}
#line 2547 "ansic.tab.c"
    break;

  case 130: /* type_qualifier: VOLATILE  */
#line 280 "ansic.y"
                                        {printf("type_qualifier: VOLATILE\n");}
#line 2553 "ansic.tab.c"
    break;

  case 131: /* declarator: pointer direct_declarator  */
#line 284 "ansic.y"
                                        {printf("declarator: pointer direct_declarator\n");}
#line 2559 "ansic.tab.c"
    break;

  case 132: /* declarator: direct_declarator  */
#line 285 "ansic.y"
                                                        {printf("declarator: direct_declarator\n");}
#line 2565 "ansic.tab.c"
    break;

  case 133: /* direct_declarator: IDENTIFIER  */
#line 289 "ansic.y"
                                                                                                {printf("direct_declarator: IDENTIFIER\n");}
#line 2571 "ansic.tab.c"
    break;

  case 134: /* direct_declarator: '(' declarator ')'  */
#line 290 "ansic.y"
                                                                                        {printf("direct_declarator: '(' declarator ')'\n");}
#line 2577 "ansic.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 291 "ansic.y"
                                                                {printf("direct_declarator: direct_declarator '[' constant_expression ']'\n");}
#line 2583 "ansic.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator '[' ']'  */
#line 292 "ansic.y"
                                                                                        {printf("direct_declarator: direct_declarator '[' ']'\n");}
#line 2589 "ansic.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 293 "ansic.y"
                                                                {printf("direct_declarator: direct_declarator '(' parameter_type_list ')'\n");}
#line 2595 "ansic.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 294 "ansic.y"
                                                                        {printf("direct_declarator: direct_declarator '(' identifier_list ')'\n");}
#line 2601 "ansic.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator '(' ')'  */
#line 295 "ansic.y"
                                                                                        {printf("direct_declarator: direct_declarator '(' ')'\n");}
#line 2607 "ansic.tab.c"
    break;

  case 140: /* pointer: '*'  */
#line 299 "ansic.y"
                                                                                {printf("pointer: '*'\n");}
#line 2613 "ansic.tab.c"
    break;

  case 141: /* pointer: '*' type_qualifier_list  */
#line 300 "ansic.y"
                                                                {printf("pointer: '*' type_qualifier_list\n");}
#line 2619 "ansic.tab.c"
    break;

  case 142: /* pointer: '*' pointer  */
#line 301 "ansic.y"
                                                                        {printf("pointer: '*' pointer\n");}
#line 2625 "ansic.tab.c"
    break;

  case 143: /* pointer: '*' type_qualifier_list pointer  */
#line 302 "ansic.y"
                                                        {printf("pointer: '*' type_qualifier_list pointer\n");}
#line 2631 "ansic.tab.c"
    break;

  case 144: /* type_qualifier_list: type_qualifier  */
#line 306 "ansic.y"
                                                                        {printf("type_qualifier_list: type_qualifier\n");}
#line 2637 "ansic.tab.c"
    break;

  case 145: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 307 "ansic.y"
                                                {printf("type_qualifier_list: type_qualifier_list type_qualifier\n");}
#line 2643 "ansic.tab.c"
    break;

  case 146: /* parameter_type_list: parameter_list  */
#line 312 "ansic.y"
                                                                {printf("parameter_type_list: parameter_list\n");}
#line 2649 "ansic.tab.c"
    break;

  case 147: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 313 "ansic.y"
                                                {printf("parameter_type_list: parameter_list ',' ELLIPSIS\n");}
#line 2655 "ansic.tab.c"
    break;

  case 148: /* parameter_list: parameter_declaration  */
#line 317 "ansic.y"
                                                                                {printf("parameter_list: parameter_declaration	\n");}
#line 2661 "ansic.tab.c"
    break;

  case 149: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 318 "ansic.y"
                                                                {printf("parameter_list: parameter_list ',' parameter_declaration\n");}
#line 2667 "ansic.tab.c"
    break;

  case 150: /* parameter_declaration: declaration_specifiers declarator  */
#line 322 "ansic.y"
                                                                        {printf("parameter_declaration: declaration_specifiers declarator	\n");}
#line 2673 "ansic.tab.c"
    break;

  case 151: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 323 "ansic.y"
                                                        {printf("parameter_declaration: declaration_specifiers abstract_declarator\n");}
#line 2679 "ansic.tab.c"
    break;

  case 152: /* parameter_declaration: declaration_specifiers  */
#line 324 "ansic.y"
                                                                                {printf("parameter_declaration: declaration_specifiers\n");}
#line 2685 "ansic.tab.c"
    break;

  case 153: /* identifier_list: IDENTIFIER  */
#line 328 "ansic.y"
                                                                {printf("identifier_list: IDENTIFIER\n");}
#line 2691 "ansic.tab.c"
    break;

  case 154: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 329 "ansic.y"
                                                {printf("identifier_list: identifier_list ',' IDENTIFIER\n");}
#line 2697 "ansic.tab.c"
    break;

  case 155: /* type_name: specifier_qualifier_list  */
#line 333 "ansic.y"
                                                                                        {printf("type_name: specifier_qualifier_list\n");}
#line 2703 "ansic.tab.c"
    break;

  case 156: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 334 "ansic.y"
                                                                {printf("type_name: specifier_qualifier_list abstract_declarator\n");}
#line 2709 "ansic.tab.c"
    break;

  case 157: /* abstract_declarator: pointer  */
#line 338 "ansic.y"
                                                                                        {printf("abstract_declarator: pointer\n");}
#line 2715 "ansic.tab.c"
    break;

  case 158: /* abstract_declarator: direct_abstract_declarator  */
#line 339 "ansic.y"
                                                                {printf("abstract_declarator: direct_abstract_declarator\n");}
#line 2721 "ansic.tab.c"
    break;

  case 159: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 340 "ansic.y"
                                                        {printf("abstract_declarator: pointer direct_abstract_declarator\n");}
#line 2727 "ansic.tab.c"
    break;

  case 160: /* direct_abstract_declarator: '(' abstract_declarator ')'  */
#line 344 "ansic.y"
                                                                                                {printf("direct_abstract_declarator: '(' abstract_declarator ')'\n");}
#line 2733 "ansic.tab.c"
    break;

  case 161: /* direct_abstract_declarator: '[' ']'  */
#line 345 "ansic.y"
                                                                                                                        {printf("direct_abstract_declarator: '[' ']'\n");}
#line 2739 "ansic.tab.c"
    break;

  case 162: /* direct_abstract_declarator: '[' constant_expression ']'  */
#line 346 "ansic.y"
                                                                                                {printf("direct_abstract_declarator: '[' constant_expression ']'\n");}
#line 2745 "ansic.tab.c"
    break;

  case 163: /* direct_abstract_declarator: direct_abstract_declarator '[' ']'  */
#line 347 "ansic.y"
                                                                                        {printf("direct_abstract_declarator: direct_abstract_declarator '[' ']'\n");}
#line 2751 "ansic.tab.c"
    break;

  case 164: /* direct_abstract_declarator: direct_abstract_declarator '[' constant_expression ']'  */
#line 348 "ansic.y"
                                                                        {printf("direct_abstract_declarator: direct_abstract_declarator '[' constant_expression ']'\n");}
#line 2757 "ansic.tab.c"
    break;

  case 165: /* direct_abstract_declarator: '(' ')'  */
#line 349 "ansic.y"
                                                                                                                        {printf("direct_abstract_declarator: '(' ')'\n");}
#line 2763 "ansic.tab.c"
    break;

  case 166: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 350 "ansic.y"
                                                                                                {printf("direct_abstract_declarator: '(' parameter_type_list ')'\n");}
#line 2769 "ansic.tab.c"
    break;

  case 167: /* direct_abstract_declarator: direct_abstract_declarator '(' ')'  */
#line 351 "ansic.y"
                                                                                        {printf("direct_abstract_declarator: direct_abstract_declarator '(' ')'\n");}
#line 2775 "ansic.tab.c"
    break;

  case 168: /* direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'  */
#line 352 "ansic.y"
                                                                        {printf("direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'\n");}
#line 2781 "ansic.tab.c"
    break;

  case 169: /* initializer: assignment_expression  */
#line 356 "ansic.y"
                                                                {printf("initializer: assignment_expression\n");}
#line 2787 "ansic.tab.c"
    break;

  case 170: /* initializer: '{' initializer_list '}'  */
#line 357 "ansic.y"
                                                                {printf("initializer: '{' initializer_list '}'\n");}
#line 2793 "ansic.tab.c"
    break;

  case 171: /* initializer: '{' initializer_list ',' '}'  */
#line 358 "ansic.y"
                                                        {printf("initializer: '{' initializer_list ',' '}'\n");}
#line 2799 "ansic.tab.c"
    break;

  case 172: /* initializer_list: initializer  */
#line 362 "ansic.y"
                                                                        {printf("initializer_list: initializer\n");}
#line 2805 "ansic.tab.c"
    break;

  case 173: /* initializer_list: initializer_list ',' initializer  */
#line 363 "ansic.y"
                                                        {printf("initializer_list: initializer_list ',' initializer\n");}
#line 2811 "ansic.tab.c"
    break;

  case 174: /* statement: labeled_statement  */
#line 367 "ansic.y"
                                                {printf("statement: labeled_statement\n");}
#line 2817 "ansic.tab.c"
    break;

  case 175: /* statement: compound_statement  */
#line 368 "ansic.y"
                                        {printf("statement: compound_statement\n");}
#line 2823 "ansic.tab.c"
    break;

  case 176: /* statement: expression_statement  */
#line 369 "ansic.y"
                                        {printf("statement: expression_statement\n");}
#line 2829 "ansic.tab.c"
    break;

  case 177: /* statement: selection_statement  */
#line 370 "ansic.y"
                                        {printf("statement: selection_statement\n");}
#line 2835 "ansic.tab.c"
    break;

  case 178: /* statement: iteration_statement  */
#line 371 "ansic.y"
                                        {printf("statement: iteration_statement\n");}
#line 2841 "ansic.tab.c"
    break;

  case 179: /* statement: jump_statement  */
#line 372 "ansic.y"
                                                {printf("statement: jump_statement\n");}
#line 2847 "ansic.tab.c"
    break;

  case 180: /* labeled_statement: IDENTIFIER ':' statement  */
#line 376 "ansic.y"
                                                                        {printf("labeled_statement: IDENTIFIER ':' statement\n");}
#line 2853 "ansic.tab.c"
    break;

  case 181: /* labeled_statement: CASE constant_expression ':' statement  */
#line 377 "ansic.y"
                                                        {printf("labeled_statement: CASE constant_expression ':' statement\n");}
#line 2859 "ansic.tab.c"
    break;

  case 182: /* labeled_statement: DEFAULT ':' statement  */
#line 378 "ansic.y"
                                                                        {printf("labeled_statement: DEFAULT ':' statement\n");}
#line 2865 "ansic.tab.c"
    break;

  case 183: /* compound_statement: '{' '}'  */
#line 382 "ansic.y"
                                                                                        {printf("compound_statement: '{' '}'\n");}
#line 2871 "ansic.tab.c"
    break;

  case 184: /* compound_statement: '{' statement_list '}'  */
#line 383 "ansic.y"
                                                                        {printf("compound_statement: '{' statement_list '}'\n");}
#line 2877 "ansic.tab.c"
    break;

  case 185: /* compound_statement: '{' declaration_list '}'  */
#line 384 "ansic.y"
                                                                        {printf("compound_statement: '{' declaration_list '}'\n");}
#line 2883 "ansic.tab.c"
    break;

  case 186: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 385 "ansic.y"
                                                        {printf("compound_statement: '{' declaration_list statement_list '}'\n");}
#line 2889 "ansic.tab.c"
    break;

  case 187: /* declaration_list: declaration  */
#line 389 "ansic.y"
                                                                {printf("declaration_list: declaration\n");}
#line 2895 "ansic.tab.c"
    break;

  case 188: /* declaration_list: declaration_list declaration  */
#line 390 "ansic.y"
                                                {printf("declaration_list: declaration_list declaration\n");}
#line 2901 "ansic.tab.c"
    break;

  case 189: /* statement_list: statement  */
#line 394 "ansic.y"
                                                                {printf("statement_list: statement\n");}
#line 2907 "ansic.tab.c"
    break;

  case 190: /* statement_list: statement_list statement  */
#line 395 "ansic.y"
                                                {printf("statement_list: statement_list statement\n");}
#line 2913 "ansic.tab.c"
    break;

  case 191: /* expression_statement: ';'  */
#line 399 "ansic.y"
                                                {printf("expression_statement: ';'\n");}
#line 2919 "ansic.tab.c"
    break;

  case 192: /* expression_statement: expression ';'  */
#line 400 "ansic.y"
                                        {printf("expression_statement: expression ';'\n");}
#line 2925 "ansic.tab.c"
    break;

  case 193: /* selection_statement: IF '(' expression ')' statement  */
#line 405 "ansic.y"
                                                                {printf("selection_statement: IF '(' expression ')' statement\n");}
#line 2931 "ansic.tab.c"
    break;

  case 194: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 406 "ansic.y"
                                                                {printf("selection_statement: IF '(' expression ')' statement ELSE statement\n");}
#line 2937 "ansic.tab.c"
    break;

  case 195: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 407 "ansic.y"
                                                                        {printf("selection_statement: SWITCH '(' expression ')' statement\n");}
#line 2943 "ansic.tab.c"
    break;

  case 196: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 411 "ansic.y"
                                                                                                                                {printf("iteration_statement: WHILE '(' expression ')' statement\n");}
#line 2949 "ansic.tab.c"
    break;

  case 197: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 412 "ansic.y"
                                                                                                                                {printf("iteration_statement: DO statement WHILE '(' expression ')' ';'\n");}
#line 2955 "ansic.tab.c"
    break;

  case 198: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 413 "ansic.y"
                                                                                                        {printf("iteration_statement: FOR '(' expression_statement expression_statement ')' statement\n");}
#line 2961 "ansic.tab.c"
    break;

  case 199: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 414 "ansic.y"
                                                                                        {printf("iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement\n");}
#line 2967 "ansic.tab.c"
    break;

  case 200: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 418 "ansic.y"
                                        {printf("jump_statement: GOTO IDENTIFIER ';'\n");}
#line 2973 "ansic.tab.c"
    break;

  case 201: /* jump_statement: CONTINUE ';'  */
#line 419 "ansic.y"
                                                {printf("jump_statement: CONTINUE ';'\n");}
#line 2979 "ansic.tab.c"
    break;

  case 202: /* jump_statement: BREAK ';'  */
#line 420 "ansic.y"
                                                        {printf("jump_statement: BREAK ';'\n");}
#line 2985 "ansic.tab.c"
    break;

  case 203: /* jump_statement: RETURN ';'  */
#line 421 "ansic.y"
                                                {printf("jump_statement: RETURN ';'\n");}
#line 2991 "ansic.tab.c"
    break;

  case 204: /* jump_statement: RETURN expression ';'  */
#line 422 "ansic.y"
                                        {printf("jump_statement: RETURN expression ';'\n");}
#line 2997 "ansic.tab.c"
    break;

  case 205: /* translation_unit: external_declaration  */
#line 426 "ansic.y"
                                                                        {printf("translation_unit: external_declaration\n");}
#line 3003 "ansic.tab.c"
    break;

  case 206: /* translation_unit: translation_unit external_declaration  */
#line 427 "ansic.y"
                                                        {printf("translation_unit: translation_unit external_declaration\n");}
#line 3009 "ansic.tab.c"
    break;

  case 207: /* external_declaration: function_definition  */
#line 431 "ansic.y"
                                   {printf("external_declaration: function_definition\n");}
#line 3015 "ansic.tab.c"
    break;

  case 208: /* external_declaration: declaration  */
#line 432 "ansic.y"
                                           {printf("external_declaration: declaration\n");}
#line 3021 "ansic.tab.c"
    break;

  case 209: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 436 "ansic.y"
                                                                                    {printf("function_definition: declaration_specifiers declarator declaration_list compound_statement\n");}
#line 3027 "ansic.tab.c"
    break;

  case 210: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 437 "ansic.y"
                                                                                                        {printf("function_definition: declaration_specifiers declarator compound_statement\n");}
#line 3033 "ansic.tab.c"
    break;

  case 211: /* function_definition: declarator declaration_list compound_statement  */
#line 438 "ansic.y"
                                                                                                                {printf("function_definition: declarator declaration_list compound_statement\n");}
#line 3039 "ansic.tab.c"
    break;

  case 212: /* function_definition: declarator compound_statement  */
#line 439 "ansic.y"
                                                                                                                                {printf("function_definition: declarator compound_statement\n");}
#line 3045 "ansic.tab.c"
    break;


#line 3049 "ansic.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 442 "ansic.y"

#include <stdio.h>

extern char yytext[];
extern int column;
extern int lineno;

void yyerror(const char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", lineno, "^", column, s);
}

int main (int argc, char *argv[]){
	int c;
	if(argc<2){
        printf("Analizador sintactico de ANSI C 1985\n");
		printf("Uso %s archivo\n", argv[0]);
		exit(0);
	}
	yyin = fopen(argv[1], "rt");
	yyparse();
    printf("Analisis sintactico exitoso!\n");
	return 0;
}
