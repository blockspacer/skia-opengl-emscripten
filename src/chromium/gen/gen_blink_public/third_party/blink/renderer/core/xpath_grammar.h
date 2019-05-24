#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_XPATH_GRAMMAR_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_XPATH_GRAMMAR_H_
/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_XPATHYY_GEN_THIRD_PARTY_BLINK_RENDERER_CORE_XPATH_GRAMMAR_HH_INCLUDED
# define YY_XPATHYY_GEN_THIRD_PARTY_BLINK_RENDERER_CORE_XPATH_GRAMMAR_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int xpathyydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MULOP = 258,
    EQOP = 259,
    RELOP = 260,
    PLUS = 261,
    MINUS = 262,
    OR = 263,
    AND = 264,
    AXISNAME = 265,
    NODETYPE = 266,
    PI = 267,
    FUNCTIONNAME = 268,
    LITERAL = 269,
    VARIABLEREFERENCE = 270,
    NUMBER = 271,
    DOTDOT = 272,
    SLASHSLASH = 273,
    NAMETEST = 274,
    XPATH_ERROR = 275
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 59 "../../third_party/blink/renderer/core/xml/xpath_grammar.y" /* yacc.c:1909  */

  blink::xpath::Step::Axis axis;
  blink::xpath::Step::NodeTest* node_test;
  blink::xpath::NumericOp::Opcode num_op;
  blink::xpath::EqTestOp::Opcode eq_op;
  String* str;
  blink::xpath::Expression* expr;
  blink::HeapVector<blink::Member<blink::xpath::Predicate>>* pred_list;
  blink::HeapVector<blink::Member<blink::xpath::Expression>>* arg_list;
  blink::xpath::Step* step;
  blink::xpath::LocationPath* location_path;

#line 88 "gen/third_party/blink/renderer/core/xpath_grammar.hh" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int xpathyyparse (blink::xpath::Parser* parser);

#endif /* !YY_XPATHYY_GEN_THIRD_PARTY_BLINK_RENDERER_CORE_XPATH_GRAMMAR_HH_INCLUDED  */

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_XPATH_GRAMMAR_H_
