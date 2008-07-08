/* This file is part of kdev-cmg
   Copyright (C) 2006 Jakob Petsovits <jpetso@gmx.at>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

#ifndef KDEV_CMG_XXX_GEN_H
#define KDEV_CMG_XXX_GEN_H

#include "kdevcmg.h"


namespace kdevcmg
{

class generate_xxx : public default_visitor
{
  std::ostream &out;

public:
  generate_xxx(std::ostream &o): out(o)
  {}

  void operator ()();

protected:
  virtual void visit_code_model_declaration(code_model_declaration_ast *node);
  virtual void visit_item_declaration(item_declaration_ast *node);
  virtual void visit_non_item_type_declaration(non_item_type_declaration_ast *node);
  virtual void visit_root_item(root_item_ast *node);
  virtual void visit_item(item_ast *node);
  virtual void visit_member_item(member_item_ast *node);
  virtual void visit_code_item(code_item_ast *node);
};

} // end of namespace kdevcmg

#endif // KDEV_XXX_GEN_H
