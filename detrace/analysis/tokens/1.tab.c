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
#line 1 "1.y"

#define YYDEBUG 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#define makelist(x) create_ast_node(AST_LIST, 1, x)
#define makelist_leaf(x) create_leaf_node(AST_LIST, x)
#define append_list(x1, x2) ((x1 && x2) ? create_ast_node(AST_LIST, 2, x1, x2) : (x1) ? x1 : (struct ASTNode *)NULL)

typedef enum {
    AST_FUNCTION_DEF,
    AST_PARAM_LIST,
    AST_PARAM,
    AST_DECLARATION,
    AST_INIT_DECLARATOR,
    AST_ASSIGNMENT,
    AST_PREPROCESSOR,
    AST_PLUS, AST_MINUS, AST_MUL, AST_DIV, AST_MOD,
    AST_LT, AST_GT, AST_LE, AST_GE,
    AST_FUNCTION_CALL,
    AST_IDENTIFIER,
    AST_LITERAL,
    AST_RETURN,
    AST_IF,
    AST_ITERATION_STMT,
    AST_COMPOUND_STMT,
    AST_ARRAY_ACCESS,
    AST_STRUCT_DECL,
    AST_TYPEDEF,
    AST_INIT_LIST,
    AST_POINTER_DEREF,
    AST_ADDRESS_OF,
    AST_BREAK,
    AST_CONTNUE,
    AST_SIZEOF,
    AST_POINTER,
    AST_TYPE_QUALIFIER,
    AST_TYPE_SPECIFIER,
    AST_FUNCTION_SPECIFIER,
    AST_TRANS,
    AST_LIST,
    AST_BLOCK,
    AST_ALIGNMENT_SPECIFIER,
    AST_STORAGE_CLASS_SPECIFIER, 
    AST_DECLARATOR,
    AST_ENUM,
    AST_TYPE_NAME, 
    AST_CONTINUE
} ASTNodeType;

struct ASTNode {
    ASTNodeType type;
    int val;
    char *value;
    int child_count;
    struct ASTNode **children;
} ASTNode;

struct ASTNode *create_ast_node(ASTNodeType type, int n, ...);
struct ASTNode *create_leaf_node(ASTNodeType type, const char *val);
void print_ast(struct ASTNode *node, int depth);
const char *ast_node_type_to_string(ASTNodeType type);

struct ASTNode *root;

FILE *yyin;
int yylex(void);
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(1);
}

#line 146 "1.tab.c"

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

#include "1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PREPROCESSOR = 3,               /* PREPROCESSOR  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 5,                     /* NUMBER  */
  YYSYMBOL_CHAR_LITERAL = 6,               /* CHAR_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_TYPEDEF_NAME = 8,               /* TYPEDEF_NAME  */
  YYSYMBOL_TYPEDEF = 9,                    /* TYPEDEF  */
  YYSYMBOL_EXTERN = 10,                    /* EXTERN  */
  YYSYMBOL_STATIC = 11,                    /* STATIC  */
  YYSYMBOL_AUTO = 12,                      /* AUTO  */
  YYSYMBOL_REGISTER = 13,                  /* REGISTER  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_CHAR = 15,                      /* CHAR  */
  YYSYMBOL_SHORT = 16,                     /* SHORT  */
  YYSYMBOL_INT = 17,                       /* INT  */
  YYSYMBOL_LONG = 18,                      /* LONG  */
  YYSYMBOL_FLOAT = 19,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 20,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 21,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 22,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 23,                      /* BOOL  */
  YYSYMBOL_STRUCT = 24,                    /* STRUCT  */
  YYSYMBOL_UNION = 25,                     /* UNION  */
  YYSYMBOL_ENUM = 26,                      /* ENUM  */
  YYSYMBOL_CONST = 27,                     /* CONST  */
  YYSYMBOL_RESTRICT = 28,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 29,                  /* VOLATILE  */
  YYSYMBOL_INLINE = 30,                    /* INLINE  */
  YYSYMBOL_NORETURN = 31,                  /* NORETURN  */
  YYSYMBOL_ALIGNAS = 32,                   /* ALIGNAS  */
  YYSYMBOL_SIZEOF = 33,                    /* SIZEOF  */
  YYSYMBOL_ELLIPSIS = 34,                  /* ELLIPSIS  */
  YYSYMBOL_LPAREN = 35,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 36,                    /* RPAREN  */
  YYSYMBOL_LSQBRACKET = 37,                /* LSQBRACKET  */
  YYSYMBOL_RSQBRACKET = 38,                /* RSQBRACKET  */
  YYSYMBOL_LBRACE = 39,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 40,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 41,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 42,                     /* COMMA  */
  YYSYMBOL_COLON = 43,                     /* COLON  */
  YYSYMBOL_DOT = 44,                       /* DOT  */
  YYSYMBOL_ARROW = 45,                     /* ARROW  */
  YYSYMBOL_QUESTION = 46,                  /* QUESTION  */
  YYSYMBOL_ASSIGN = 47,                    /* ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 48,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 49,              /* MINUS_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 50,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 51,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 52,                /* MOD_ASSIGN  */
  YYSYMBOL_SHIFT_LEFT_ASSIGN = 53,         /* SHIFT_LEFT_ASSIGN  */
  YYSYMBOL_SHIFT_RIGHT_ASSIGN = 54,        /* SHIFT_RIGHT_ASSIGN  */
  YYSYMBOL_BIT_AND_ASSIGN = 55,            /* BIT_AND_ASSIGN  */
  YYSYMBOL_BIT_XOR_ASSIGN = 56,            /* BIT_XOR_ASSIGN  */
  YYSYMBOL_BIT_OR_ASSIGN = 57,             /* BIT_OR_ASSIGN  */
  YYSYMBOL_OR = 58,                        /* OR  */
  YYSYMBOL_AND = 59,                       /* AND  */
  YYSYMBOL_BIT_OR = 60,                    /* BIT_OR  */
  YYSYMBOL_BIT_AND = 61,                   /* BIT_AND  */
  YYSYMBOL_BIT_XOR = 62,                   /* BIT_XOR  */
  YYSYMBOL_XOR = 63,                       /* XOR  */
  YYSYMBOL_NOT = 64,                       /* NOT  */
  YYSYMBOL_BIT_NOT = 65,                   /* BIT_NOT  */
  YYSYMBOL_EQUAL = 66,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 67,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS = 68,                      /* LESS  */
  YYSYMBOL_GREATER = 69,                   /* GREATER  */
  YYSYMBOL_LESS_EQUAL = 70,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 71,             /* GREATER_EQUAL  */
  YYSYMBOL_SHIFT_LEFT = 72,                /* SHIFT_LEFT  */
  YYSYMBOL_SHIFT_RIGHT = 73,               /* SHIFT_RIGHT  */
  YYSYMBOL_PLUS = 74,                      /* PLUS  */
  YYSYMBOL_MINUS = 75,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 76,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 77,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 78,                    /* MODULO  */
  YYSYMBOL_IF = 79,                        /* IF  */
  YYSYMBOL_ELSE = 80,                      /* ELSE  */
  YYSYMBOL_WHILE = 81,                     /* WHILE  */
  YYSYMBOL_GOTO = 82,                      /* GOTO  */
  YYSYMBOL_BREAK = 83,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 84,                  /* CONTINUE  */
  YYSYMBOL_FOR = 85,                       /* FOR  */
  YYSYMBOL_SWITCH = 86,                    /* SWITCH  */
  YYSYMBOL_CASE = 87,                      /* CASE  */
  YYSYMBOL_DEFAULT = 88,                   /* DEFAULT  */
  YYSYMBOL_DO = 89,                        /* DO  */
  YYSYMBOL_INCREMENT = 90,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 91,                 /* DECREMENT  */
  YYSYMBOL_RETURN = 92,                    /* RETURN  */
  YYSYMBOL_LOWER_THAN_ELSE = 93,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 94,                  /* $accept  */
  YYSYMBOL_translation_unit = 95,          /* translation_unit  */
  YYSYMBOL_external_declaration = 96,      /* external_declaration  */
  YYSYMBOL_declaration_list = 97,          /* declaration_list  */
  YYSYMBOL_block_item = 98,                /* block_item  */
  YYSYMBOL_type_qualifier_list = 99,       /* type_qualifier_list  */
  YYSYMBOL_compound_statement = 100,       /* compound_statement  */
  YYSYMBOL_non_empty_block_item_list = 101, /* non_empty_block_item_list  */
  YYSYMBOL_function_definition = 102,      /* function_definition  */
  YYSYMBOL_declaration = 103,              /* declaration  */
  YYSYMBOL_init_declarator_list = 104,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 105,          /* init_declarator  */
  YYSYMBOL_declaration_specifiers = 106,   /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 107,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 108,           /* type_specifier  */
  YYSYMBOL_type_qualifier = 109,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 110,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 111,      /* alignment_specifier  */
  YYSYMBOL_declarator = 112,               /* declarator  */
  YYSYMBOL_pointer = 113,                  /* pointer  */
  YYSYMBOL_direct_declarator = 114,        /* direct_declarator  */
  YYSYMBOL_struct_or_union_specifier = 115, /* struct_or_union_specifier  */
  YYSYMBOL_struct_declaration_list = 116,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 117,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 118, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 119,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 120,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 121,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 122,          /* enumerator_list  */
  YYSYMBOL_enumeration_constant = 123,     /* enumeration_constant  */
  YYSYMBOL_type_name = 124,                /* type_name  */
  YYSYMBOL_abstract_declarator = 125,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 126, /* direct_abstract_declarator  */
  YYSYMBOL_parameter_type_list = 127,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 128,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 129,    /* parameter_declaration  */
  YYSYMBOL_initializer = 130,              /* initializer  */
  YYSYMBOL_initializer_list = 131,         /* initializer_list  */
  YYSYMBOL_statement = 132,                /* statement  */
  YYSYMBOL_iteration_statement = 133,      /* iteration_statement  */
  YYSYMBOL_conditional_statement = 134,    /* conditional_statement  */
  YYSYMBOL_expression_statement = 135,     /* expression_statement  */
  YYSYMBOL_primary_expression = 136,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 137,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 138, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 139,         /* unary_expression  */
  YYSYMBOL_unary_operator = 140,           /* unary_operator  */
  YYSYMBOL_cast_expression = 141,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 142, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 143,      /* additive_expression  */
  YYSYMBOL_shift_expression = 144,         /* shift_expression  */
  YYSYMBOL_relational_expression = 145,    /* relational_expression  */
  YYSYMBOL_equality_expression = 146,      /* equality_expression  */
  YYSYMBOL_and_expression = 147,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 148,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 149,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 150,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 151,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 152,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 153,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 154,      /* assignment_operator  */
  YYSYMBOL_expression = 155,               /* expression  */
  YYSYMBOL_constant_expression = 156       /* constant_expression  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   348


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   114,   114,   115,   120,   121,   122,   127,   128,   132,
     133,   138,   139,   144,   145,   149,   150,   155,   156,   160,
     161,   165,   166,   170,   171,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   188,   189,   190,   191,   192,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   212,   213,   214,   218,   219,   223,   228,
     229,   233,   234,   235,   236,   240,   241,   242,   243,   244,
     245,   249,   250,   251,   252,   253,   254,   258,   259,   263,
     264,   268,   269,   270,   271,   275,   276,   280,   281,   282,
     286,   287,   288,   292,   293,   297,   301,   302,   306,   307,
     308,   312,   313,   314,   315,   316,   317,   321,   322,   326,
     327,   331,   332,   333,   337,   338,   339,   343,   344,   348,
     349,   350,   351,   352,   353,   354,   358,   359,   360,   364,
     365,   369,   370,   374,   375,   376,   377,   378,   382,   383,
     384,   385,   386,   387,   388,   389,   393,   394,   398,   399,
     400,   401,   402,   403,   407,   408,   409,   410,   411,   412,
     416,   417,   421,   422,   423,   424,   428,   429,   430,   434,
     435,   436,   440,   441,   442,   443,   444,   448,   449,   450,
     454,   455,   459,   460,   464,   465,   469,   470,   474,   475,
     479,   480,   484,   485,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   503,   504,   508
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PREPROCESSOR",
  "IDENTIFIER", "NUMBER", "CHAR_LITERAL", "STRING_LITERAL", "TYPEDEF_NAME",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "VOID", "CHAR",
  "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "SIGNED", "UNSIGNED", "BOOL",
  "STRUCT", "UNION", "ENUM", "CONST", "RESTRICT", "VOLATILE", "INLINE",
  "NORETURN", "ALIGNAS", "SIZEOF", "ELLIPSIS", "LPAREN", "RPAREN",
  "LSQBRACKET", "RSQBRACKET", "LBRACE", "RBRACE", "SEMICOLON", "COMMA",
  "COLON", "DOT", "ARROW", "QUESTION", "ASSIGN", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "SHIFT_LEFT_ASSIGN", "SHIFT_RIGHT_ASSIGN", "BIT_AND_ASSIGN",
  "BIT_XOR_ASSIGN", "BIT_OR_ASSIGN", "OR", "AND", "BIT_OR", "BIT_AND",
  "BIT_XOR", "XOR", "NOT", "BIT_NOT", "EQUAL", "NOT_EQUAL", "LESS",
  "GREATER", "LESS_EQUAL", "GREATER_EQUAL", "SHIFT_LEFT", "SHIFT_RIGHT",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULO", "IF", "ELSE", "WHILE",
  "GOTO", "BREAK", "CONTINUE", "FOR", "SWITCH", "CASE", "DEFAULT", "DO",
  "INCREMENT", "DECREMENT", "RETURN", "LOWER_THAN_ELSE", "$accept",
  "translation_unit", "external_declaration", "declaration_list",
  "block_item", "type_qualifier_list", "compound_statement",
  "non_empty_block_item_list", "function_definition", "declaration",
  "init_declarator_list", "init_declarator", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "function_specifier", "alignment_specifier", "declarator", "pointer",
  "direct_declarator", "struct_or_union_specifier",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list",
  "enumeration_constant", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "parameter_type_list", "parameter_list",
  "parameter_declaration", "initializer", "initializer_list", "statement",
  "iteration_statement", "conditional_statement", "expression_statement",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1148,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,     9,    13,
      15,  -198,  -198,  -198,  -198,  -198,   -11,  1031,  -198,  -198,
    -198,   888,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   -18,
    1225,    14,  1225,    61,    24,  1225,  -198,  -198,  -198,    39,
    -198,    98,    20,  -198,  -198,  -198,  -198,  -198,  -198,   991,
      12,    86,  1225,  1225,  1225,   304,  -198,    40,  1225,   527,
      24,  -198,    92,  -198,    -3,    99,   103,    98,  -198,  -198,
    -198,    39,   276,   672,  1116,  -198,  -198,   888,    86,   501,
     760,  1056,  -198,  -198,  -198,  -198,  -198,   760,   152,    30,
    -198,  1083,  -198,   140,  -198,    24,   957,   109,   189,  -198,
     199,  -198,  -198,  -198,  -198,  -198,   170,  -198,  -198,  -198,
    -198,   767,   579,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,   188,   198,   186,   196,   221,   412,   804,   804,   760,
    -198,  -198,   365,  -198,  -198,  -198,  -198,  -198,  -198,    85,
     192,   760,  -198,   175,   133,   190,   151,   200,   197,   202,
     201,   191,    21,  -198,  -198,   227,   672,  -198,  -198,  -198,
    -198,  -198,   922,   238,   268,  -198,    75,  -198,   296,  -198,
    -198,  -198,  -198,   760,  -198,   142,  -198,  -198,  -198,   299,
     300,  -198,   623,   199,  1200,   760,   579,  -198,   302,   157,
     760,   760,  -198,  -198,   716,   258,   760,  -198,  -198,   229,
    -198,  -198,   723,   760,   338,   339,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   760,
    -198,   760,   760,   760,   760,   760,   760,   760,   760,   760,
     760,   760,   760,   760,   760,   760,   760,   760,   760,   760,
    -198,   760,  -198,   215,   922,  -198,   177,  -198,  -198,  1173,
    -198,   760,  -198,  -198,  -198,  -198,  -198,   307,   310,   309,
     312,   760,  -198,   162,   169,   716,   314,  -198,  -198,   173,
      76,  -198,  -198,  -198,  -198,  -198,  -198,   175,   175,   133,
     133,   190,   190,   190,   190,   151,   151,   200,   197,   202,
     201,   230,   191,  -198,  -198,   628,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,   412,   412,   716,   760,  -198,  -198,
     760,  -198,  -198,   273,  -198,   318,   174,  -198,   412,   412,
     315,  -198,  -198,  -198
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,    52,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,    53,    54,    55,    56,    57,     0,     0,     2,     4,
       5,     0,    25,    26,    27,    28,    29,    50,    51,    73,
       0,    76,     0,    92,     0,     0,     1,     3,    65,     0,
      19,    61,     0,    21,    30,    31,    32,    33,    34,    24,
       0,    60,     0,    81,    83,     0,    77,     0,     0,     0,
       0,    95,     0,    93,    96,     0,     0,    62,    11,    63,
      20,     0,     0,     0,     0,    18,     7,     0,    59,     0,
       0,     0,    82,    84,    71,    78,    79,     0,    87,     0,
      85,     0,    74,     0,    90,     0,     0,     0,    98,    97,
     100,    58,    66,    12,    64,    22,    24,   133,   134,   135,
     136,     0,     0,    13,   131,   154,   159,   158,   156,   157,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,   123,     0,     9,    10,   121,   122,   119,   138,   148,
     160,     0,   162,   166,   169,   172,   177,   180,   182,   184,
     186,   188,   190,   192,   205,     0,     0,    23,   114,    17,
       8,    68,   113,     0,   107,   109,     0,   146,     0,    72,
     160,   207,    89,     0,    80,     0,    75,    91,    94,     0,
       0,   102,     0,    99,     0,     0,     0,   152,     0,     0,
       0,     0,   124,   125,     0,     0,     0,   149,   150,     0,
      14,    16,     0,     0,     0,     0,   144,   145,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,     0,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,     0,   117,     0,     0,   111,    98,   112,    70,     0,
      69,     0,    67,    88,    86,   101,   105,     0,     0,     0,
       0,     0,   137,     0,     0,     0,     0,   120,   140,     0,
       0,   142,   143,   193,   163,   164,   165,   167,   168,   170,
     171,   173,   174,   175,   176,   178,   179,   181,   183,   185,
     187,     0,   189,   206,   115,     0,   108,   110,   147,   103,
     106,   104,   153,   161,     0,     0,     0,     0,   141,   139,
       0,   116,   118,   129,   127,     0,     0,   191,     0,     0,
       0,   130,   128,   126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,   331,  -198,   220,   256,   -34,  -198,  -198,   -14,
    -198,   283,    49,   -27,     6,     0,     7,    11,    -1,   -48,
     -59,  -198,   128,   -55,   -23,  -198,   214,  -198,   332,   298,
    -111,   -62,   -88,   -81,  -198,   148,  -164,  -198,  -127,  -198,
    -198,  -197,  -198,  -198,   203,   -82,  -198,  -128,    41,    77,
      -9,    35,   164,   156,   163,   165,   161,  -198,   -92,   -26,
    -198,  -104,   228
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    27,    28,    84,   140,    77,   141,   142,    29,    30,
      52,    53,   172,    32,    63,    64,    35,    36,    76,    60,
      61,    37,    65,    66,    67,    99,   100,    38,    72,    73,
      75,   189,   110,   190,   174,   175,   167,   253,   144,   145,
     146,   147,   148,   149,   176,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     229,   165,   182
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    88,   252,    79,    54,   181,    33,   275,   173,   205,
      95,   198,   109,    39,    95,   180,    48,    41,   199,    43,
     193,    62,    74,   230,    45,    85,   108,    34,    71,   114,
      59,    56,   106,    33,   107,   209,    95,    55,    57,   197,
      92,    93,    58,    48,    48,    86,    95,    49,    40,    31,
     169,    78,    42,    68,    44,   207,   208,   168,   108,    34,
      54,    80,    81,   177,   178,    33,    98,   248,   143,   180,
     170,   184,   185,    51,    49,    49,    31,   113,   316,   249,
     116,    96,    34,    97,    34,   270,   116,    56,    33,    34,
      33,   181,   199,    55,    57,    33,   273,   274,    58,    74,
      70,   180,   199,   284,   285,   286,    34,    78,    87,   280,
     257,   260,    33,   268,   319,    51,    51,   261,   251,   325,
     212,    89,   213,    90,   256,    21,    22,    23,   143,   214,
     215,    87,   104,    87,   105,   111,    21,    22,    23,   112,
     168,   322,    34,   313,   301,    54,    48,   191,    33,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   267,   180,   193,   269,
      69,   255,    56,    74,    51,   216,   217,    49,    55,    57,
     187,    48,   105,    58,    98,    97,   177,   323,   324,   180,
      91,    87,   113,   272,    34,   183,   101,    88,   314,   251,
      33,   331,   332,   283,   251,   315,   256,   234,   235,   318,
     330,   251,   254,   326,   107,   261,   251,    83,    51,   238,
     239,   240,   241,   200,   106,   303,   107,   202,   327,   291,
     292,   293,   294,   201,   194,   308,   195,   203,   180,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     247,   231,   232,   233,    34,   304,   204,   305,   244,    34,
      33,   246,   236,   237,   245,    33,   242,   243,   250,   251,
     277,   251,   251,   320,   258,   287,   288,   295,   296,   168,
     117,   118,   119,   120,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   121,
     259,   122,     2,   289,   290,    82,   123,   124,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   262,   265,   266,   125,   271,   276,
     126,   127,   281,   282,    94,   309,   310,   311,   312,   317,
     128,   129,   130,   328,   329,   131,   333,   132,    47,   133,
     134,   135,   211,   192,   115,   136,   137,   138,   139,   117,
     118,   119,   120,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   121,   264,
     122,   298,   103,   188,    82,   210,   124,   307,   297,   299,
     302,   263,   300,     0,     0,   279,   117,   118,   119,   120,
       0,     0,     0,     0,     0,     0,   125,     0,     0,   126,
     127,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,     0,     0,   131,   121,   132,   122,   133,   134,
     135,    82,     0,   124,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,     0,     0,   126,   127,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,     0,
       0,   131,     0,   132,     0,   133,   134,   135,     0,     0,
       0,   136,   137,   138,   139,   117,   118,   119,   120,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   121,     2,   122,   171,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,     0,   125,     0,     0,   126,   127,   102,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,     0,     0,
       0,     0,     0,   117,   118,   119,   120,     2,     0,     0,
       0,   137,   138,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,   121,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,     0,   117,   118,   119,   120,     0,     0,     0,     0,
     125,     0,     0,   126,   127,     0,     0,     0,     0,     0,
      21,    22,    23,   128,   129,   130,   121,     0,   122,     0,
       0,   121,     0,   122,     0,     0,     0,   166,   321,   137,
     138,     0,     0,     0,     0,     0,   117,   118,   119,   120,
       0,     0,     0,     0,   125,     0,     0,   126,   127,   125,
       0,     0,   126,   127,     0,     0,     0,   128,   129,   130,
       0,     0,   128,   129,   130,   121,     0,   122,     0,     0,
       0,   166,     0,   137,   138,     0,     0,     0,   137,   138,
     117,   118,   119,   120,     0,     0,     0,   117,   118,   119,
     120,     0,     0,   125,     0,     0,   126,   127,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   121,
       0,   122,     0,     0,     0,     0,   121,   124,   122,   278,
       0,     0,   137,   138,   117,   118,   119,   120,     0,     0,
       0,   117,   118,   119,   120,     0,     0,   125,     0,     0,
     126,   127,     0,     0,   125,     0,     0,   126,   127,     0,
     128,   129,   130,   121,     0,   122,     0,   128,   129,   130,
     121,     0,   196,     0,     0,     0,   137,   138,   117,   118,
     119,   120,     0,   137,   138,     0,     0,     0,     0,     0,
       0,   125,     0,     0,   126,   127,     0,     0,   125,     0,
       0,   126,   127,     0,   128,   129,   130,   121,     0,   206,
       0,   128,   129,   130,     0,     0,     0,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,     0,   125,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,   137,   138,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    49,     0,     0,    48,     0,     0,    50,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   254,     0,   107,
       0,     0,     0,     0,    51,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,   106,     0,   107,     0,     0,     0,    51,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      82,    46,     0,    51,     1,     0,     0,     0,    83,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     2,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   179,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     1,     0,     0,     0,    82,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,   306,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    60,   166,    51,    31,    97,     0,   204,    89,   136,
      65,   122,    74,     4,    69,    97,     4,     4,   122,     4,
     108,    39,    45,   151,    35,    59,    74,    27,     4,    77,
      31,    31,    35,    27,    37,   139,    91,    31,    31,   121,
      63,    64,    31,     4,     4,    59,   101,    35,    39,     0,
      84,    51,    39,    39,    39,   137,   138,    83,   106,    59,
      87,    41,    42,    89,    90,    59,    67,    46,    82,   151,
      84,    41,    42,    76,    35,    35,    27,    77,   275,    58,
      81,    41,    82,    43,    84,   196,    87,    87,    82,    89,
      84,   183,   196,    87,    87,    89,   200,   201,    87,   122,
      39,   183,   206,   231,   232,   233,   106,   107,    59,   213,
     172,    36,   106,   194,    38,    76,    76,    42,    42,   316,
      35,    35,    37,    37,   172,    27,    28,    29,   142,    44,
      45,    82,    40,    84,    42,    36,    27,    28,    29,    36,
     166,   305,   142,   271,   248,   172,     4,    38,   142,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   192,   249,   256,   195,
      42,   172,   172,   196,    76,    90,    91,    35,   172,   172,
      40,     4,    42,   172,   185,    43,   212,   314,   315,   271,
      62,   142,   192,    36,   194,    43,    68,   256,    36,    42,
     194,   328,   329,   229,    42,    36,   254,    74,    75,    36,
      36,    42,    35,   317,    37,    42,    42,    47,    76,    68,
      69,    70,    71,    35,    35,   251,    37,    41,   320,   238,
     239,   240,   241,    35,    35,   261,    37,    41,   320,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      59,    76,    77,    78,   254,    40,    35,    42,    61,   259,
     254,    60,    72,    73,    62,   259,    66,    67,    41,    42,
      41,    42,    42,    43,    36,   234,   235,   242,   243,   305,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      42,    35,     8,   236,   237,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    38,    36,    36,    61,    36,    81,
      64,    65,     4,     4,    40,    38,    36,    38,    36,    35,
      74,    75,    76,    80,    36,    79,    41,    81,    27,    83,
      84,    85,   142,   107,    81,    89,    90,    91,    92,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,   185,
      35,   245,    70,   105,    39,    40,    41,   259,   244,   246,
     249,   183,   247,    -1,    -1,   212,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    -1,    -1,    79,    33,    81,    35,    83,    84,
      85,    39,    -1,    41,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    -1,    -1,
      -1,    89,    90,    91,    92,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     8,    35,    36,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    64,    65,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    90,    91,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,    -1,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    74,    75,    76,    33,    -1,    35,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    90,
      91,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    65,    61,
      -1,    -1,    64,    65,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    74,    75,    76,    33,    -1,    35,    -1,    -1,
      -1,    39,    -1,    90,    91,    -1,    -1,    -1,    90,    91,
       4,     5,     6,     7,    -1,    -1,    -1,     4,     5,     6,
       7,    -1,    -1,    61,    -1,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    33,
      -1,    35,    -1,    -1,    -1,    -1,    33,    41,    35,    36,
      -1,    -1,    90,    91,     4,     5,     6,     7,    -1,    -1,
      -1,     4,     5,     6,     7,    -1,    -1,    61,    -1,    -1,
      64,    65,    -1,    -1,    61,    -1,    -1,    64,    65,    -1,
      74,    75,    76,    33,    -1,    35,    -1,    74,    75,    76,
      33,    -1,    35,    -1,    -1,    -1,    90,    91,     4,     5,
       6,     7,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    64,    65,    -1,    -1,    61,    -1,
      -1,    64,    65,    -1,    74,    75,    76,    33,    -1,    35,
      -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    90,    91,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,     4,    -1,    -1,    41,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    37,
      -1,    -1,    -1,    -1,    76,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    76,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,     0,    -1,    76,     3,    -1,    -1,    -1,    47,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     8,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    40,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,     3,    -1,    -1,    -1,    39,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    95,    96,   102,
     103,   106,   107,   108,   109,   110,   111,   115,   121,     4,
      39,     4,    39,     4,    39,    35,     0,    96,     4,    35,
      41,    76,   104,   105,   107,   108,   109,   110,   111,   112,
     113,   114,    39,   108,   109,   116,   117,   118,    39,   116,
      39,     4,   122,   123,   118,   124,   112,    99,   109,   113,
      41,    42,    39,    47,    97,   100,   103,   106,   114,    35,
      37,   116,   118,   118,    40,   117,    41,    43,   112,   119,
     120,   116,    40,   122,    40,    42,    35,    37,   113,   125,
     126,    36,    36,   109,   113,   105,   112,     4,     5,     6,
       7,    33,    35,    40,    41,    61,    64,    65,    74,    75,
      76,    79,    81,    83,    84,    85,    89,    90,    91,    92,
      98,   100,   101,   103,   132,   133,   134,   135,   136,   137,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   155,    39,   130,   153,   100,
     103,    36,   106,   127,   128,   129,   138,   153,   153,    40,
     139,   152,   156,    43,    41,    42,    40,    40,   123,   125,
     127,    38,    99,   126,    35,    37,    35,   139,   124,   155,
      35,    35,    41,    41,    35,   132,    35,   139,   139,   155,
      40,    98,    35,    37,    44,    45,    90,    91,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   154,
     141,    76,    77,    78,    74,    75,    72,    73,    68,    69,
      70,    71,    66,    67,    61,    62,    60,    59,    46,    58,
      41,    42,   130,   131,    35,   112,   113,   125,    36,    42,
      36,    42,    38,   156,   120,    36,    36,   153,   127,   153,
     124,    36,    36,   155,   155,   135,    81,    41,    36,   138,
     155,     4,     4,   153,   141,   141,   141,   142,   142,   143,
     143,   144,   144,   144,   144,   145,   145,   146,   147,   148,
     149,   155,   150,   153,    40,    42,    34,   129,   153,    38,
      36,    38,    36,   141,    36,    36,   135,    35,    36,    38,
      43,    40,   130,   132,   132,   135,   155,   152,    80,    36,
      36,   132,   132,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    96,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   109,   109,   109,   110,   110,   111,   112,
     112,   113,   113,   113,   113,   114,   114,   114,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   116,   116,   117,
     117,   118,   118,   118,   118,   119,   119,   120,   120,   120,
     121,   121,   121,   122,   122,   123,   124,   124,   125,   125,
     125,   126,   126,   126,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   130,   130,   130,   131,   131,   132,
     132,   132,   132,   132,   132,   132,   133,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   136,   136,   137,   137,
     137,   137,   137,   137,   137,   137,   138,   138,   139,   139,
     139,   139,   139,   139,   140,   140,   140,   140,   140,   140,
     141,   141,   142,   142,   142,   142,   143,   143,   143,   144,
     144,   144,   145,   145,   145,   145,   145,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   155,   155,   156
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     2,     3,     1,     2,     4,     3,     2,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     2,
       1,     1,     2,     2,     3,     1,     3,     4,     3,     4,
       4,     4,     5,     2,     4,     5,     2,     1,     2,     2,
       3,     1,     2,     1,     2,     1,     3,     1,     3,     2,
       4,     5,     2,     1,     3,     1,     1,     2,     1,     2,
       1,     3,     2,     4,     4,     3,     4,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     4,     1,     3,     1,
       3,     1,     1,     1,     2,     2,     7,     5,     7,     5,
       7,     1,     2,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* translation_unit: external_declaration  */
#line 114 "1.y"
                           { root = (yyvsp[0].node); (yyval.node) = (yyvsp[0].node); }
#line 2011 "1.tab.c"
    break;

  case 3: /* translation_unit: translation_unit external_declaration  */
#line 115 "1.y"
                                            { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    root = (yyval.node); }
#line 2018 "1.tab.c"
    break;

  case 4: /* external_declaration: function_definition  */
#line 120 "1.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2024 "1.tab.c"
    break;

  case 5: /* external_declaration: declaration  */
#line 121 "1.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 2030 "1.tab.c"
    break;

  case 6: /* external_declaration: PREPROCESSOR  */
#line 122 "1.y"
                   { (yyval.node) = create_leaf_node(AST_PREPROCESSOR, (yyvsp[0].sval)); }
#line 2036 "1.tab.c"
    break;

  case 7: /* declaration_list: declaration  */
#line 127 "1.y"
                  { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2042 "1.tab.c"
    break;

  case 8: /* declaration_list: declaration_list declaration  */
#line 128 "1.y"
                                   { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2048 "1.tab.c"
    break;

  case 9: /* block_item: declaration  */
#line 132 "1.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 2054 "1.tab.c"
    break;

  case 10: /* block_item: statement  */
#line 133 "1.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2060 "1.tab.c"
    break;

  case 11: /* type_qualifier_list: type_qualifier  */
#line 138 "1.y"
                     { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2066 "1.tab.c"
    break;

  case 12: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 139 "1.y"
                                         { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2072 "1.tab.c"
    break;

  case 13: /* compound_statement: LBRACE RBRACE  */
#line 144 "1.y"
                    { (yyval.node) = create_ast_node(AST_COMPOUND_STMT, 1, NULL); }
#line 2078 "1.tab.c"
    break;

  case 14: /* compound_statement: LBRACE non_empty_block_item_list RBRACE  */
#line 145 "1.y"
                                              { (yyval.node) = create_ast_node(AST_COMPOUND_STMT, 1, (yyvsp[-1].node)); }
#line 2084 "1.tab.c"
    break;

  case 15: /* non_empty_block_item_list: block_item  */
#line 149 "1.y"
                 { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2090 "1.tab.c"
    break;

  case 16: /* non_empty_block_item_list: non_empty_block_item_list block_item  */
#line 150 "1.y"
                                           { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2096 "1.tab.c"
    break;

  case 17: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 155 "1.y"
                                                                            { (yyval.node) = create_ast_node(AST_FUNCTION_DEF, 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2102 "1.tab.c"
    break;

  case 18: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 156 "1.y"
                                                           { (yyval.node) = create_ast_node(AST_FUNCTION_DEF, 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2108 "1.tab.c"
    break;

  case 19: /* declaration: declaration_specifiers SEMICOLON  */
#line 160 "1.y"
                                       { (yyval.node) = create_ast_node(AST_DECLARATION, 1, (yyvsp[-1].node)); }
#line 2114 "1.tab.c"
    break;

  case 20: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 161 "1.y"
                                                            { (yyval.node) = create_ast_node(AST_DECLARATION, 2, (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2120 "1.tab.c"
    break;

  case 21: /* init_declarator_list: init_declarator  */
#line 165 "1.y"
                      { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2126 "1.tab.c"
    break;

  case 22: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 166 "1.y"
                                                 { (yyval.node) = append_list((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2132 "1.tab.c"
    break;

  case 23: /* init_declarator: declarator ASSIGN initializer  */
#line 170 "1.y"
                                    { (yyval.node) = create_ast_node(AST_INIT_DECLARATOR, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2138 "1.tab.c"
    break;

  case 24: /* init_declarator: declarator  */
#line 171 "1.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 2144 "1.tab.c"
    break;

  case 25: /* declaration_specifiers: storage_class_specifier  */
#line 175 "1.y"
                              { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2150 "1.tab.c"
    break;

  case 26: /* declaration_specifiers: type_specifier  */
#line 176 "1.y"
                     { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2156 "1.tab.c"
    break;

  case 27: /* declaration_specifiers: type_qualifier  */
#line 177 "1.y"
                     { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2162 "1.tab.c"
    break;

  case 28: /* declaration_specifiers: function_specifier  */
#line 178 "1.y"
                         { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2168 "1.tab.c"
    break;

  case 29: /* declaration_specifiers: alignment_specifier  */
#line 179 "1.y"
                          { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2174 "1.tab.c"
    break;

  case 30: /* declaration_specifiers: declaration_specifiers storage_class_specifier  */
#line 180 "1.y"
                                                     { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2180 "1.tab.c"
    break;

  case 31: /* declaration_specifiers: declaration_specifiers type_specifier  */
#line 181 "1.y"
                                            { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2186 "1.tab.c"
    break;

  case 32: /* declaration_specifiers: declaration_specifiers type_qualifier  */
#line 182 "1.y"
                                            { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2192 "1.tab.c"
    break;

  case 33: /* declaration_specifiers: declaration_specifiers function_specifier  */
#line 183 "1.y"
                                                { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2198 "1.tab.c"
    break;

  case 34: /* declaration_specifiers: declaration_specifiers alignment_specifier  */
#line 184 "1.y"
                                                 { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2204 "1.tab.c"
    break;

  case 35: /* storage_class_specifier: TYPEDEF  */
#line 188 "1.y"
              { (yyval.node) = create_leaf_node(AST_STORAGE_CLASS_SPECIFIER, "typedef"); }
#line 2210 "1.tab.c"
    break;

  case 36: /* storage_class_specifier: EXTERN  */
#line 189 "1.y"
             { (yyval.node) = create_leaf_node(AST_STORAGE_CLASS_SPECIFIER, "extern"); }
#line 2216 "1.tab.c"
    break;

  case 37: /* storage_class_specifier: STATIC  */
#line 190 "1.y"
             { (yyval.node) = create_leaf_node(AST_STORAGE_CLASS_SPECIFIER, "static"); }
#line 2222 "1.tab.c"
    break;

  case 38: /* storage_class_specifier: AUTO  */
#line 191 "1.y"
           { (yyval.node) = create_leaf_node(AST_STORAGE_CLASS_SPECIFIER, "auto"); }
#line 2228 "1.tab.c"
    break;

  case 39: /* storage_class_specifier: REGISTER  */
#line 192 "1.y"
               { (yyval.node) = create_leaf_node(AST_STORAGE_CLASS_SPECIFIER, "register"); }
#line 2234 "1.tab.c"
    break;

  case 40: /* type_specifier: VOID  */
#line 196 "1.y"
           { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "void"); }
#line 2240 "1.tab.c"
    break;

  case 41: /* type_specifier: CHAR  */
#line 197 "1.y"
           { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "char"); }
#line 2246 "1.tab.c"
    break;

  case 42: /* type_specifier: SHORT  */
#line 198 "1.y"
            { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "short"); }
#line 2252 "1.tab.c"
    break;

  case 43: /* type_specifier: INT  */
#line 199 "1.y"
          { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "int"); }
#line 2258 "1.tab.c"
    break;

  case 44: /* type_specifier: LONG  */
#line 200 "1.y"
           { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "long"); }
#line 2264 "1.tab.c"
    break;

  case 45: /* type_specifier: FLOAT  */
#line 201 "1.y"
            { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "float"); }
#line 2270 "1.tab.c"
    break;

  case 46: /* type_specifier: DOUBLE  */
#line 202 "1.y"
             { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "double"); }
#line 2276 "1.tab.c"
    break;

  case 47: /* type_specifier: SIGNED  */
#line 203 "1.y"
             { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "signed"); }
#line 2282 "1.tab.c"
    break;

  case 48: /* type_specifier: UNSIGNED  */
#line 204 "1.y"
               { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "unsigned"); }
#line 2288 "1.tab.c"
    break;

  case 49: /* type_specifier: BOOL  */
#line 205 "1.y"
           { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, "bool"); }
#line 2294 "1.tab.c"
    break;

  case 50: /* type_specifier: struct_or_union_specifier  */
#line 206 "1.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2300 "1.tab.c"
    break;

  case 51: /* type_specifier: enum_specifier  */
#line 207 "1.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 2306 "1.tab.c"
    break;

  case 52: /* type_specifier: TYPEDEF_NAME  */
#line 208 "1.y"
                   { (yyval.node) = create_leaf_node(AST_TYPE_SPECIFIER, (yyvsp[0].sval)); }
#line 2312 "1.tab.c"
    break;

  case 53: /* type_qualifier: CONST  */
#line 212 "1.y"
            { (yyval.node) = create_leaf_node(AST_TYPE_QUALIFIER, "const"); }
#line 2318 "1.tab.c"
    break;

  case 54: /* type_qualifier: RESTRICT  */
#line 213 "1.y"
               { (yyval.node) = create_leaf_node(AST_TYPE_QUALIFIER, "restrict"); }
#line 2324 "1.tab.c"
    break;

  case 55: /* type_qualifier: VOLATILE  */
#line 214 "1.y"
               { (yyval.node) = create_leaf_node(AST_TYPE_QUALIFIER, "volatile"); }
#line 2330 "1.tab.c"
    break;

  case 56: /* function_specifier: INLINE  */
#line 218 "1.y"
             { (yyval.node) = create_leaf_node(AST_FUNCTION_SPECIFIER, "inline"); }
#line 2336 "1.tab.c"
    break;

  case 57: /* function_specifier: NORETURN  */
#line 219 "1.y"
               { (yyval.node) = create_leaf_node(AST_FUNCTION_SPECIFIER, "noreturn"); }
#line 2342 "1.tab.c"
    break;

  case 58: /* alignment_specifier: ALIGNAS LPAREN type_name RPAREN  */
#line 223 "1.y"
                                      { (yyval.node) = create_ast_node(AST_ALIGNMENT_SPECIFIER, 1, (yyvsp[-1].node)); }
#line 2348 "1.tab.c"
    break;

  case 59: /* declarator: pointer direct_declarator  */
#line 228 "1.y"
                                { (yyval.node) = create_ast_node(AST_DECLARATOR, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2354 "1.tab.c"
    break;

  case 60: /* declarator: direct_declarator  */
#line 229 "1.y"
                        { (yyval.node) = create_ast_node(AST_DECLARATOR, 1, (yyvsp[0].node)); }
#line 2360 "1.tab.c"
    break;

  case 61: /* pointer: MULTIPLY  */
#line 233 "1.y"
               { (yyval.node) = create_ast_node(AST_POINTER, 1, NULL);}
#line 2366 "1.tab.c"
    break;

  case 62: /* pointer: MULTIPLY type_qualifier_list  */
#line 234 "1.y"
                                   { (yyval.node) = create_ast_node(AST_POINTER, 1, (yyvsp[0].node));}
#line 2372 "1.tab.c"
    break;

  case 63: /* pointer: MULTIPLY pointer  */
#line 235 "1.y"
                       { (yyval.node) = create_ast_node(AST_POINTER, 1, (yyvsp[0].node)); }
#line 2378 "1.tab.c"
    break;

  case 64: /* pointer: MULTIPLY type_qualifier_list pointer  */
#line 236 "1.y"
                                           { (yyval.node) = create_ast_node(AST_POINTER, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2384 "1.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 240 "1.y"
                 { (yyval.node) = create_leaf_node(AST_IDENTIFIER, (yyvsp[0].sval)); }
#line 2390 "1.tab.c"
    break;

  case 66: /* direct_declarator: LPAREN declarator RPAREN  */
#line 241 "1.y"
                               { (yyval.node) = (yyvsp[-1].node); }
#line 2396 "1.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LSQBRACKET assignment_expression RSQBRACKET  */
#line 242 "1.y"
                                                                    { (yyval.node) = create_ast_node(AST_ARRAY_ACCESS, 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2402 "1.tab.c"
    break;

  case 68: /* direct_declarator: direct_declarator LPAREN RPAREN  */
#line 243 "1.y"
                                      { (yyval.node) = create_ast_node(AST_FUNCTION_CALL, 1, (yyvsp[-2].node)); }
#line 2408 "1.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LPAREN argument_expression_list RPAREN  */
#line 244 "1.y"
                                                               { (yyval.node) = create_ast_node(AST_FUNCTION_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2414 "1.tab.c"
    break;

  case 70: /* direct_declarator: direct_declarator LPAREN parameter_type_list RPAREN  */
#line 245 "1.y"
                                                          { (yyval.node) = create_ast_node(AST_FUNCTION_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2420 "1.tab.c"
    break;

  case 71: /* struct_or_union_specifier: STRUCT LBRACE struct_declaration_list RBRACE  */
#line 249 "1.y"
                                                   { (yyval.node) = create_ast_node(AST_STRUCT_DECL, 1, (yyvsp[-1].node)); }
#line 2426 "1.tab.c"
    break;

  case 72: /* struct_or_union_specifier: STRUCT IDENTIFIER LBRACE struct_declaration_list RBRACE  */
#line 250 "1.y"
                                                              { (yyval.node) = create_ast_node(AST_STRUCT_DECL, 2, create_leaf_node(AST_IDENTIFIER, (yyvsp[-3].sval)), (yyvsp[-1].node)); }
#line 2432 "1.tab.c"
    break;

  case 73: /* struct_or_union_specifier: STRUCT IDENTIFIER  */
#line 251 "1.y"
                        { (yyval.node) = create_ast_node(AST_STRUCT_DECL, 1, create_leaf_node(AST_IDENTIFIER, (yyvsp[0].sval))); }
#line 2438 "1.tab.c"
    break;

  case 74: /* struct_or_union_specifier: UNION LBRACE struct_declaration_list RBRACE  */
#line 252 "1.y"
                                                  { (yyval.node) = create_ast_node(AST_STRUCT_DECL, 1, (yyvsp[-1].node)); }
#line 2444 "1.tab.c"
    break;

  case 75: /* struct_or_union_specifier: UNION IDENTIFIER LBRACE struct_declaration_list RBRACE  */
#line 253 "1.y"
                                                             { (yyval.node) = create_ast_node(AST_STRUCT_DECL, 2, create_leaf_node(AST_IDENTIFIER, (yyvsp[-3].sval)), (yyvsp[-1].node)); }
#line 2450 "1.tab.c"
    break;

  case 76: /* struct_or_union_specifier: UNION IDENTIFIER  */
#line 254 "1.y"
                       { (yyval.node) = create_ast_node(AST_STRUCT_DECL, 1, create_leaf_node(AST_IDENTIFIER, (yyvsp[0].sval))); }
#line 2456 "1.tab.c"
    break;

  case 77: /* struct_declaration_list: struct_declaration  */
#line 258 "1.y"
                         { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2462 "1.tab.c"
    break;

  case 78: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 259 "1.y"
                                                 { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2468 "1.tab.c"
    break;

  case 79: /* struct_declaration: specifier_qualifier_list SEMICOLON  */
#line 263 "1.y"
                                         { (yyval.node) = (yyvsp[-1].node); }
#line 2474 "1.tab.c"
    break;

  case 80: /* struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON  */
#line 264 "1.y"
                                                                { (yyval.node) = create_ast_node(AST_DECLARATION, 2, (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2480 "1.tab.c"
    break;

  case 81: /* specifier_qualifier_list: type_specifier  */
#line 268 "1.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 2486 "1.tab.c"
    break;

  case 82: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 269 "1.y"
                                              { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2492 "1.tab.c"
    break;

  case 83: /* specifier_qualifier_list: type_qualifier  */
#line 270 "1.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 2498 "1.tab.c"
    break;

  case 84: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 271 "1.y"
                                              { (yyval.node) = append_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2504 "1.tab.c"
    break;

  case 85: /* struct_declarator_list: struct_declarator  */
#line 275 "1.y"
                        { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2510 "1.tab.c"
    break;

  case 86: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 276 "1.y"
                                                     { (yyval.node) = append_list((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2516 "1.tab.c"
    break;

  case 87: /* struct_declarator: declarator  */
#line 280 "1.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 2522 "1.tab.c"
    break;

  case 88: /* struct_declarator: declarator COLON constant_expression  */
#line 281 "1.y"
                                           { (yyval.node) = create_ast_node(AST_DECLARATOR, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2528 "1.tab.c"
    break;

  case 89: /* struct_declarator: COLON constant_expression  */
#line 282 "1.y"
                                { (yyval.node) = create_ast_node(AST_DECLARATOR, 1, (yyvsp[0].node)); }
#line 2534 "1.tab.c"
    break;

  case 90: /* enum_specifier: ENUM LBRACE enumerator_list RBRACE  */
#line 286 "1.y"
                                         { (yyval.node) = create_ast_node(AST_ENUM, 1, (yyvsp[-1].node)); }
#line 2540 "1.tab.c"
    break;

  case 91: /* enum_specifier: ENUM IDENTIFIER LBRACE enumerator_list RBRACE  */
#line 287 "1.y"
                                                    { (yyval.node) = create_ast_node(AST_ENUM, 2, create_leaf_node(AST_IDENTIFIER, (yyvsp[-3].sval)), (yyvsp[-1].node)); }
#line 2546 "1.tab.c"
    break;

  case 92: /* enum_specifier: ENUM IDENTIFIER  */
#line 288 "1.y"
                      { (yyval.node) = create_ast_node(AST_ENUM, 1, create_leaf_node(AST_IDENTIFIER, (yyvsp[0].sval))); }
#line 2552 "1.tab.c"
    break;

  case 93: /* enumerator_list: enumeration_constant  */
#line 292 "1.y"
                           { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2558 "1.tab.c"
    break;

  case 94: /* enumerator_list: enumerator_list COMMA enumeration_constant  */
#line 293 "1.y"
                                                 { (yyval.node) = append_list((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2564 "1.tab.c"
    break;

  case 95: /* enumeration_constant: IDENTIFIER  */
#line 297 "1.y"
                 { (yyval.node) = create_leaf_node(AST_IDENTIFIER, (yyvsp[0].sval)); }
#line 2570 "1.tab.c"
    break;

  case 96: /* type_name: specifier_qualifier_list  */
#line 301 "1.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 2576 "1.tab.c"
    break;

  case 97: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 302 "1.y"
                                                   { (yyval.node) = create_ast_node(AST_TYPE_NAME, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2582 "1.tab.c"
    break;

  case 98: /* abstract_declarator: pointer  */
#line 306 "1.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 2588 "1.tab.c"
    break;

  case 99: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 307 "1.y"
                                         { (yyval.node) = create_ast_node(AST_DECLARATOR, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2594 "1.tab.c"
    break;

  case 100: /* abstract_declarator: direct_abstract_declarator  */
#line 308 "1.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2600 "1.tab.c"
    break;

  case 101: /* direct_abstract_declarator: LPAREN abstract_declarator RPAREN  */
#line 312 "1.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 2606 "1.tab.c"
    break;

  case 102: /* direct_abstract_declarator: LSQBRACKET RSQBRACKET  */
#line 313 "1.y"
                            { (yyval.node) = create_ast_node(AST_ARRAY_ACCESS, 0); }
#line 2612 "1.tab.c"
    break;

  case 103: /* direct_abstract_declarator: LSQBRACKET type_qualifier_list assignment_expression RSQBRACKET  */
#line 314 "1.y"
                                                                      { (yyval.node) = create_ast_node(AST_ARRAY_ACCESS, 2, (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2618 "1.tab.c"
    break;

  case 104: /* direct_abstract_declarator: direct_abstract_declarator LSQBRACKET assignment_expression RSQBRACKET  */
#line 315 "1.y"
                                                                             { (yyval.node) = create_ast_node(AST_ARRAY_ACCESS, 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2624 "1.tab.c"
    break;

  case 105: /* direct_abstract_declarator: LPAREN parameter_type_list RPAREN  */
#line 316 "1.y"
                                        { (yyval.node) = create_ast_node(AST_FUNCTION_CALL, 1, (yyvsp[-1].node)); }
#line 2630 "1.tab.c"
    break;

  case 106: /* direct_abstract_declarator: direct_abstract_declarator LPAREN parameter_type_list RPAREN  */
#line 317 "1.y"
                                                                   { (yyval.node) = create_ast_node(AST_FUNCTION_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2636 "1.tab.c"
    break;

  case 107: /* parameter_type_list: parameter_list  */
#line 321 "1.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 2642 "1.tab.c"
    break;

  case 108: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 322 "1.y"
                                    { (yyval.node) = create_ast_node(AST_PARAM_LIST, 2, (yyvsp[-2].node), create_leaf_node(AST_IDENTIFIER, "...")); }
#line 2648 "1.tab.c"
    break;

  case 109: /* parameter_list: parameter_declaration  */
#line 326 "1.y"
                            { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2654 "1.tab.c"
    break;

  case 110: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 327 "1.y"
                                                 { (yyval.node) = append_list((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2660 "1.tab.c"
    break;

  case 111: /* parameter_declaration: declaration_specifiers declarator  */
#line 331 "1.y"
                                        { (yyval.node) = create_ast_node(AST_PARAM, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2666 "1.tab.c"
    break;

  case 112: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 332 "1.y"
                                                 { (yyval.node) = create_ast_node(AST_PARAM, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2672 "1.tab.c"
    break;

  case 113: /* parameter_declaration: declaration_specifiers  */
#line 333 "1.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2678 "1.tab.c"
    break;

  case 114: /* initializer: assignment_expression  */
#line 337 "1.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2684 "1.tab.c"
    break;

  case 115: /* initializer: LBRACE initializer_list RBRACE  */
#line 338 "1.y"
                                     { (yyval.node) = create_ast_node(AST_INIT_LIST, 1, (yyvsp[-1].node)); }
#line 2690 "1.tab.c"
    break;

  case 116: /* initializer: LBRACE initializer_list COMMA RBRACE  */
#line 339 "1.y"
                                           { (yyval.node) = create_ast_node(AST_INIT_LIST, 1, (yyvsp[-2].node)); }
#line 2696 "1.tab.c"
    break;

  case 117: /* initializer_list: initializer  */
#line 343 "1.y"
                  { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2702 "1.tab.c"
    break;

  case 118: /* initializer_list: initializer_list COMMA initializer  */
#line 344 "1.y"
                                         { (yyval.node) = append_list((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2708 "1.tab.c"
    break;

  case 119: /* statement: expression_statement  */
#line 348 "1.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2714 "1.tab.c"
    break;

  case 120: /* statement: RETURN expression SEMICOLON  */
#line 349 "1.y"
                                  { (yyval.node) = create_ast_node(AST_RETURN, 1, (yyvsp[-1].node)); }
#line 2720 "1.tab.c"
    break;

  case 121: /* statement: iteration_statement  */
#line 350 "1.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2726 "1.tab.c"
    break;

  case 122: /* statement: conditional_statement  */
#line 351 "1.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2732 "1.tab.c"
    break;

  case 123: /* statement: compound_statement  */
#line 352 "1.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 2738 "1.tab.c"
    break;

  case 124: /* statement: BREAK SEMICOLON  */
#line 353 "1.y"
                      { (yyval.node) = create_ast_node(AST_BREAK, 0); }
#line 2744 "1.tab.c"
    break;

  case 125: /* statement: CONTINUE SEMICOLON  */
#line 354 "1.y"
                         { (yyval.node) = create_ast_node(AST_CONTINUE, 0); }
#line 2750 "1.tab.c"
    break;

  case 126: /* iteration_statement: DO statement WHILE LPAREN expression RPAREN SEMICOLON  */
#line 358 "1.y"
                                                            { (yyval.node) = create_ast_node(AST_ITERATION_STMT, 2, (yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2756 "1.tab.c"
    break;

  case 127: /* iteration_statement: WHILE LPAREN expression RPAREN statement  */
#line 359 "1.y"
                                               { (yyval.node) = create_ast_node(AST_ITERATION_STMT, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2762 "1.tab.c"
    break;

  case 128: /* iteration_statement: FOR LPAREN expression_statement expression_statement expression_statement RPAREN statement  */
#line 360 "1.y"
                                                                                                 { (yyval.node) = create_ast_node(AST_ITERATION_STMT, 4, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2768 "1.tab.c"
    break;

  case 129: /* conditional_statement: IF LPAREN expression RPAREN statement  */
#line 364 "1.y"
                                                                  { (yyval.node) = create_ast_node(AST_IF, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2774 "1.tab.c"
    break;

  case 130: /* conditional_statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 365 "1.y"
                                                           { (yyval.node) = create_ast_node(AST_IF, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2780 "1.tab.c"
    break;

  case 131: /* expression_statement: SEMICOLON  */
#line 369 "1.y"
                { (yyval.node) = NULL; }
#line 2786 "1.tab.c"
    break;

  case 132: /* expression_statement: expression SEMICOLON  */
#line 370 "1.y"
                           { (yyval.node) = (yyvsp[-1].node); }
#line 2792 "1.tab.c"
    break;

  case 133: /* primary_expression: IDENTIFIER  */
#line 374 "1.y"
                 { (yyval.node) = create_leaf_node(AST_IDENTIFIER, (yyvsp[0].sval)); }
#line 2798 "1.tab.c"
    break;

  case 134: /* primary_expression: NUMBER  */
#line 375 "1.y"
             { (yyval.node) = create_leaf_node(AST_LITERAL, (yyvsp[0].sval)); }
#line 2804 "1.tab.c"
    break;

  case 135: /* primary_expression: CHAR_LITERAL  */
#line 376 "1.y"
                   { (yyval.node) = create_leaf_node(AST_LITERAL, (yyvsp[0].sval)); }
#line 2810 "1.tab.c"
    break;

  case 136: /* primary_expression: STRING_LITERAL  */
#line 377 "1.y"
                     { (yyval.node) = create_leaf_node(AST_LITERAL, (yyvsp[0].sval)); }
#line 2816 "1.tab.c"
    break;

  case 137: /* primary_expression: LPAREN expression RPAREN  */
#line 378 "1.y"
                               { (yyval.node) = (yyvsp[-1].node); }
#line 2822 "1.tab.c"
    break;

  case 138: /* postfix_expression: primary_expression  */
#line 382 "1.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 2828 "1.tab.c"
    break;

  case 139: /* postfix_expression: postfix_expression LSQBRACKET expression RSQBRACKET  */
#line 383 "1.y"
                                                          { (yyval.node) = create_ast_node(AST_ARRAY_ACCESS, 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2834 "1.tab.c"
    break;

  case 140: /* postfix_expression: postfix_expression LPAREN RPAREN  */
#line 384 "1.y"
                                       { (yyval.node) = create_ast_node(AST_FUNCTION_CALL, 1, (yyvsp[-2].node)); }
#line 2840 "1.tab.c"
    break;

  case 141: /* postfix_expression: postfix_expression LPAREN argument_expression_list RPAREN  */
#line 385 "1.y"
                                                                { (yyval.node) = create_ast_node(AST_FUNCTION_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2846 "1.tab.c"
    break;

  case 142: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 386 "1.y"
                                        { (yyval.node) = create_ast_node(AST_STRUCT_DECL, 2, (yyvsp[-2].node), create_leaf_node(AST_IDENTIFIER, (yyvsp[0].sval))); }
#line 2852 "1.tab.c"
    break;

  case 143: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 387 "1.y"
                                          { (yyval.node) = create_ast_node(AST_POINTER_DEREF, 2, (yyvsp[-2].node), create_leaf_node(AST_IDENTIFIER, (yyvsp[0].sval))); }
#line 2858 "1.tab.c"
    break;

  case 144: /* postfix_expression: postfix_expression INCREMENT  */
#line 388 "1.y"
                                   { (yyval.node) = create_ast_node(AST_TRANS, 1, (yyvsp[-1].node)); }
#line 2864 "1.tab.c"
    break;

  case 145: /* postfix_expression: postfix_expression DECREMENT  */
#line 389 "1.y"
                                   { (yyval.node) = create_ast_node(AST_TRANS, 1, (yyvsp[-1].node)); }
#line 2870 "1.tab.c"
    break;

  case 146: /* argument_expression_list: assignment_expression  */
#line 393 "1.y"
                            { (yyval.node) = makelist((yyvsp[0].node)); }
#line 2876 "1.tab.c"
    break;

  case 147: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 394 "1.y"
                                                           { (yyval.node) = append_list((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2882 "1.tab.c"
    break;

  case 148: /* unary_expression: postfix_expression  */
#line 398 "1.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 2888 "1.tab.c"
    break;

  case 149: /* unary_expression: INCREMENT unary_expression  */
#line 399 "1.y"
                                 { (yyval.node) = create_ast_node(AST_TRANS, 1, (yyvsp[0].node)); }
#line 2894 "1.tab.c"
    break;

  case 150: /* unary_expression: DECREMENT unary_expression  */
#line 400 "1.y"
                                 { (yyval.node) = create_ast_node(AST_TRANS, 1, (yyvsp[0].node)); }
#line 2900 "1.tab.c"
    break;

  case 151: /* unary_expression: unary_operator cast_expression  */
#line 401 "1.y"
                                     { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2906 "1.tab.c"
    break;

  case 152: /* unary_expression: SIZEOF unary_expression  */
#line 402 "1.y"
                              { (yyval.node) = create_ast_node(AST_SIZEOF, 1, (yyvsp[0].node)); }
#line 2912 "1.tab.c"
    break;

  case 153: /* unary_expression: SIZEOF LPAREN type_name RPAREN  */
#line 403 "1.y"
                                     { (yyval.node) = create_ast_node(AST_SIZEOF, 1, (yyvsp[-1].node)); }
#line 2918 "1.tab.c"
    break;

  case 154: /* unary_operator: BIT_AND  */
#line 407 "1.y"
              { (yyval.node) = create_leaf_node(AST_TRANS, "&"); }
#line 2924 "1.tab.c"
    break;

  case 155: /* unary_operator: MULTIPLY  */
#line 408 "1.y"
               { (yyval.node) = create_leaf_node(AST_TRANS, "*"); }
#line 2930 "1.tab.c"
    break;

  case 156: /* unary_operator: PLUS  */
#line 409 "1.y"
           { (yyval.node) = create_leaf_node(AST_TRANS, "+"); }
#line 2936 "1.tab.c"
    break;

  case 157: /* unary_operator: MINUS  */
#line 410 "1.y"
            { (yyval.node) = create_leaf_node(AST_TRANS, "-"); }
#line 2942 "1.tab.c"
    break;

  case 158: /* unary_operator: BIT_NOT  */
#line 411 "1.y"
              { (yyval.node) = create_leaf_node(AST_TRANS, "~"); }
#line 2948 "1.tab.c"
    break;

  case 159: /* unary_operator: NOT  */
#line 412 "1.y"
          { (yyval.node) = create_leaf_node(AST_TRANS, "!"); }
#line 2954 "1.tab.c"
    break;

  case 160: /* cast_expression: unary_expression  */
#line 416 "1.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 2960 "1.tab.c"
    break;

  case 161: /* cast_expression: LPAREN type_name RPAREN cast_expression  */
#line 417 "1.y"
                                              { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2966 "1.tab.c"
    break;

  case 162: /* multiplicative_expression: cast_expression  */
#line 421 "1.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 2972 "1.tab.c"
    break;

  case 163: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 422 "1.y"
                                                         { (yyval.node) = create_ast_node(AST_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2978 "1.tab.c"
    break;

  case 164: /* multiplicative_expression: multiplicative_expression DIVIDE cast_expression  */
#line 423 "1.y"
                                                       { (yyval.node) = create_ast_node(AST_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2984 "1.tab.c"
    break;

  case 165: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 424 "1.y"
                                                       { (yyval.node) = create_ast_node(AST_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2990 "1.tab.c"
    break;

  case 166: /* additive_expression: multiplicative_expression  */
#line 428 "1.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2996 "1.tab.c"
    break;

  case 167: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 429 "1.y"
                                                         { (yyval.node) = create_ast_node(AST_PLUS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3002 "1.tab.c"
    break;

  case 168: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 430 "1.y"
                                                          { (yyval.node) = create_ast_node(AST_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3008 "1.tab.c"
    break;

  case 169: /* shift_expression: additive_expression  */
#line 434 "1.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 3014 "1.tab.c"
    break;

  case 170: /* shift_expression: shift_expression SHIFT_LEFT additive_expression  */
#line 435 "1.y"
                                                      { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3020 "1.tab.c"
    break;

  case 171: /* shift_expression: shift_expression SHIFT_RIGHT additive_expression  */
#line 436 "1.y"
                                                       { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3026 "1.tab.c"
    break;

  case 172: /* relational_expression: shift_expression  */
#line 440 "1.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 3032 "1.tab.c"
    break;

  case 173: /* relational_expression: relational_expression LESS shift_expression  */
#line 441 "1.y"
                                                  { (yyval.node) = create_ast_node(AST_LT, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3038 "1.tab.c"
    break;

  case 174: /* relational_expression: relational_expression GREATER shift_expression  */
#line 442 "1.y"
                                                     { (yyval.node) = create_ast_node(AST_GT, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3044 "1.tab.c"
    break;

  case 175: /* relational_expression: relational_expression LESS_EQUAL shift_expression  */
#line 443 "1.y"
                                                        { (yyval.node) = create_ast_node(AST_LE, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3050 "1.tab.c"
    break;

  case 176: /* relational_expression: relational_expression GREATER_EQUAL shift_expression  */
#line 444 "1.y"
                                                           { (yyval.node) = create_ast_node(AST_GE, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3056 "1.tab.c"
    break;

  case 177: /* equality_expression: relational_expression  */
#line 448 "1.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 3062 "1.tab.c"
    break;

  case 178: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 449 "1.y"
                                                      { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3068 "1.tab.c"
    break;

  case 179: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 450 "1.y"
                                                          { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3074 "1.tab.c"
    break;

  case 180: /* and_expression: equality_expression  */
#line 454 "1.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 3080 "1.tab.c"
    break;

  case 181: /* and_expression: and_expression BIT_AND equality_expression  */
#line 455 "1.y"
                                                 { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3086 "1.tab.c"
    break;

  case 182: /* exclusive_or_expression: and_expression  */
#line 459 "1.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 3092 "1.tab.c"
    break;

  case 183: /* exclusive_or_expression: exclusive_or_expression BIT_XOR and_expression  */
#line 460 "1.y"
                                                     { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3098 "1.tab.c"
    break;

  case 184: /* inclusive_or_expression: exclusive_or_expression  */
#line 464 "1.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 3104 "1.tab.c"
    break;

  case 185: /* inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression  */
#line 465 "1.y"
                                                             { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3110 "1.tab.c"
    break;

  case 186: /* logical_and_expression: inclusive_or_expression  */
#line 469 "1.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 3116 "1.tab.c"
    break;

  case 187: /* logical_and_expression: logical_and_expression AND inclusive_or_expression  */
#line 470 "1.y"
                                                         { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3122 "1.tab.c"
    break;

  case 188: /* logical_or_expression: logical_and_expression  */
#line 474 "1.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 3128 "1.tab.c"
    break;

  case 189: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 475 "1.y"
                                                      { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3134 "1.tab.c"
    break;

  case 190: /* conditional_expression: logical_or_expression  */
#line 479 "1.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 3140 "1.tab.c"
    break;

  case 191: /* conditional_expression: logical_or_expression QUESTION expression COLON conditional_expression  */
#line 480 "1.y"
                                                                             { (yyval.node) = create_ast_node(AST_TRANS, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3146 "1.tab.c"
    break;

  case 192: /* assignment_expression: conditional_expression  */
#line 484 "1.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 3152 "1.tab.c"
    break;

  case 193: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 485 "1.y"
                                                                 { (yyval.node) = create_ast_node(AST_ASSIGNMENT, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3158 "1.tab.c"
    break;

  case 194: /* assignment_operator: ASSIGN  */
#line 489 "1.y"
             { (yyval.node) = create_leaf_node(AST_TRANS, "="); }
#line 3164 "1.tab.c"
    break;

  case 195: /* assignment_operator: PLUS_ASSIGN  */
#line 490 "1.y"
                  { (yyval.node) = create_leaf_node(AST_TRANS, "+="); }
#line 3170 "1.tab.c"
    break;

  case 196: /* assignment_operator: MINUS_ASSIGN  */
#line 491 "1.y"
                   { (yyval.node) = create_leaf_node(AST_TRANS, "-="); }
#line 3176 "1.tab.c"
    break;

  case 197: /* assignment_operator: MUL_ASSIGN  */
#line 492 "1.y"
                 { (yyval.node) = create_leaf_node(AST_TRANS, "*="); }
#line 3182 "1.tab.c"
    break;

  case 198: /* assignment_operator: DIV_ASSIGN  */
#line 493 "1.y"
                 { (yyval.node) = create_leaf_node(AST_TRANS, "/="); }
#line 3188 "1.tab.c"
    break;

  case 199: /* assignment_operator: MOD_ASSIGN  */
#line 494 "1.y"
                 { (yyval.node) = create_leaf_node(AST_TRANS, "%="); }
#line 3194 "1.tab.c"
    break;

  case 200: /* assignment_operator: SHIFT_LEFT_ASSIGN  */
#line 495 "1.y"
                        { (yyval.node) = create_leaf_node(AST_TRANS, "<<="); }
#line 3200 "1.tab.c"
    break;

  case 201: /* assignment_operator: SHIFT_RIGHT_ASSIGN  */
#line 496 "1.y"
                         { (yyval.node) = create_leaf_node(AST_TRANS, ">>="); }
#line 3206 "1.tab.c"
    break;

  case 202: /* assignment_operator: BIT_AND_ASSIGN  */
#line 497 "1.y"
                     { (yyval.node) = create_leaf_node(AST_TRANS, "&="); }
#line 3212 "1.tab.c"
    break;

  case 203: /* assignment_operator: BIT_XOR_ASSIGN  */
#line 498 "1.y"
                     { (yyval.node) = create_leaf_node(AST_TRANS, "^="); }
#line 3218 "1.tab.c"
    break;

  case 204: /* assignment_operator: BIT_OR_ASSIGN  */
#line 499 "1.y"
                    { (yyval.node) = create_leaf_node(AST_TRANS, "|="); }
#line 3224 "1.tab.c"
    break;

  case 205: /* expression: assignment_expression  */
#line 503 "1.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 3230 "1.tab.c"
    break;

  case 206: /* expression: expression COMMA assignment_expression  */
#line 504 "1.y"
                                             { (yyval.node) = create_ast_node(AST_TRANS, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3236 "1.tab.c"
    break;

  case 207: /* constant_expression: conditional_expression  */
#line 508 "1.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 3242 "1.tab.c"
    break;


#line 3246 "1.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 511 "1.y"



struct ASTNode *create_ast_node(ASTNodeType type, int n, ...) {
    va_list args;
    va_start(args, n);

    struct ASTNode *ret = malloc(sizeof *ret);
    ret->type        = type;
    ret->val         = 0;        // no integer payload
    ret->value       = NULL;     // no string payload
    ret->child_count = n;
    ret->children    = malloc(sizeof *ret->children * n);
    for (int i = 0; i < n; i++)
        ret->children[i] = va_arg(args, struct ASTNode *);
    va_end(args);

    return ret;
}

struct ASTNode *create_leaf_node(ASTNodeType type, const char *val) {
    struct ASTNode *ret = malloc(sizeof *ret);
    ret->type        = type;
    ret->val         = 0;                // or parse an int if NUMBER
    ret->value       = val ? strdup(val) : NULL;
    ret->child_count = 0;                // NO children
    ret->children    = NULL;             // must be NULL if count == 0
    return ret;
}

/*void add_child_node(struct ASTNode *parent, struct ASTNode *child) {
    if (parent->child_count >= parent->child_capacity) {
        parent->child_capacity <<= 1;
        parent->children = (struct ASTNode **)realloc(parent->children, parent->child_capacity * sizeof(struct ASTNode *));
    }
    parent->children[parent->child_count++] = child;
}*/



int yylex(void) {
    char tok[64];
    if (fscanf(yyin, "%63s", tok) != 1) return 0;
    /* Map token text to token codes */
    #define MATCH(t) if (strcmp(tok,#t)==0) return t;
    MATCH(PREPROCESSOR)
    MATCH(IDENTIFIER) MATCH(NUMBER) MATCH(CHAR_LITERAL) MATCH(STRING_LITERAL)
    MATCH(TYPEDEF_NAME) MATCH(TYPEDEF) MATCH(EXTERN) MATCH(STATIC) MATCH(AUTO) MATCH(REGISTER)
    MATCH(VOID) MATCH(CHAR) MATCH(SHORT) MATCH(INT) MATCH(LONG) MATCH(FLOAT) MATCH(DOUBLE) MATCH(SIGNED) MATCH(UNSIGNED) MATCH(BOOL)
    MATCH(STRUCT) MATCH(UNION) MATCH(ENUM) MATCH(CONST) MATCH(RESTRICT) MATCH(VOLATILE)
    MATCH(INLINE) MATCH(NORETURN) MATCH(ALIGNAS) MATCH(SIZEOF) MATCH(ELLIPSIS) MATCH(WHILE) MATCH(FOR) MATCH(IF) MATCH(ELSE)
    MATCH(LPAREN) MATCH(RPAREN) MATCH(LSQBRACKET) MATCH(RSQBRACKET) MATCH(LBRACE) MATCH(RBRACE)
    MATCH(SEMICOLON) MATCH(COMMA) MATCH(COLON) MATCH(DOT) MATCH(ARROW) MATCH(QUESTION)
    MATCH(ASSIGN) MATCH(PLUS_ASSIGN) MATCH(MINUS_ASSIGN) MATCH(MUL_ASSIGN) MATCH(DIV_ASSIGN) MATCH(MOD_ASSIGN)
    MATCH(SHIFT_LEFT_ASSIGN) MATCH(SHIFT_RIGHT_ASSIGN) MATCH(BIT_AND_ASSIGN) MATCH(BIT_XOR_ASSIGN) MATCH(BIT_OR_ASSIGN)
    MATCH(OR) MATCH(AND) MATCH(BIT_OR) MATCH(BIT_AND) MATCH(XOR) MATCH(NOT) MATCH(BIT_NOT)
    MATCH(EQUAL) MATCH(NOT_EQUAL) MATCH(LESS) MATCH(GREATER) MATCH(LESS_EQUAL) MATCH(GREATER_EQUAL)
    MATCH(SHIFT_LEFT) MATCH(SHIFT_RIGHT)
    MATCH(PLUS) MATCH(MINUS) MATCH(MULTIPLY) MATCH(DIVIDE) MATCH(MODULO) MATCH(BREAK) MATCH(CONTINUE)
    MATCH(INCREMENT) MATCH(DECREMENT) MATCH(RETURN)
    fprintf(stderr, "Unknown token: %s\n", tok);
    exit(1);
}
extern int yydebug;
const char *ast_node_type_to_string(ASTNodeType type) {
    switch (type) {
        case AST_FUNCTION_DEF:            return "FunctionDef";
        case AST_PARAM_LIST:              return "ParamList";
        case AST_PARAM:                   return "Param";
        case AST_DECLARATION:             return "Declaration";
        case AST_INIT_DECLARATOR:         return "InitDeclarator";
        case AST_ASSIGNMENT:              return "Assignment";
        case AST_PREPROCESSOR:            return "Preprocessor";
        case AST_PLUS:                    return "Plus";
        case AST_MINUS:                   return "Minus";
        case AST_MUL:                     return "Multiply";
        case AST_DIV:                     return "Divide";
        case AST_MOD:                     return "Modulo";
        case AST_LT:                      return "LessThan";
        case AST_GT:                      return "GreaterThan";
        case AST_LE:                      return "LessEqual";
        case AST_GE:                      return "GreaterEqual";
        case AST_FUNCTION_CALL:           return "FunctionCall";
        case AST_IDENTIFIER:              return "Identifier";
        case AST_LITERAL:                 return "Literal";
        case AST_RETURN:                  return "Return";
        case AST_IF:                      return "If";
        case AST_ITERATION_STMT:          return "IterationStmt";
        case AST_COMPOUND_STMT:           return "CompoundStmt";
        case AST_ARRAY_ACCESS:            return "ArrayAccess";
        case AST_STRUCT_DECL:             return "StructDecl";
        case AST_TYPEDEF:                 return "Typedef";
        case AST_INIT_LIST:               return "InitList";
        case AST_POINTER_DEREF:           return "PointerDeref";
        case AST_ADDRESS_OF:              return "AddressOf";
        case AST_BREAK:                   return "Break";
        case AST_CONTINUE:                return "Continue";
        case AST_SIZEOF:                  return "Sizeof";
        case AST_POINTER:                 return "Pointer";
        case AST_TYPE_QUALIFIER:          return "TypeQualifier";
        case AST_TYPE_SPECIFIER:          return "TypeSpecifier";
        case AST_FUNCTION_SPECIFIER:      return "FunctionSpecifier";
        case AST_TRANS:                   return "TranslationUnit";
        case AST_LIST:                    return "List";
        case AST_BLOCK:                   return "Block";
        case AST_ALIGNMENT_SPECIFIER:     return "AlignmentSpecifier";
        case AST_STORAGE_CLASS_SPECIFIER: return "StorageClassSpecifier";
        case AST_DECLARATOR:              return "Declarator";
        case AST_ENUM:                    return "EnumSpecifier";
        case AST_TYPE_NAME:               return "TypeName";
        default:                         return "Unknown";
    }
}

void print_ast(struct ASTNode *node, int depth) {
    if (!node) return;
    // indent
    for(int i = 0; i < depth; i++) putchar(' ');
    // print this node’s type
    printf("%s", ast_node_type_to_string(node->type));
    // if it has a string payload:
    if (node->value) {
        printf("(%s)", node->value);
    }
    putchar('\n');
    // recurse on children
    for(int i = 0; i < node->child_count; i++) {
        print_ast(node->children[i], depth + 2);
    }
}
int main(int argc, char **argv) {
    //yydebug = 1;
    if (argc < 2) {
        fprintf(stderr, "Usage: %s tokens.txt\n", argv[0]);
        return 1;
    }
    yyin = fopen(argv[1], "r");
    int tok, i;
    rewind(yyin);
    /* you’d need your own tokname() here or just print tok */
    /*for (i = 0; i < 20 && (tok = yylex()); ++i)
        printf("tok[%d] = %d\n", i, tok);*/
    rewind(yyin);
    if (yyparse() == 0) {
        print_ast(root, 0);
        return 0;
    } else {
        fprintf(stderr, "Parse error\n");
        return 1;
    }
}
