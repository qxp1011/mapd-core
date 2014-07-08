#ifndef AST_ATOM_H
#define AST_ATOM_H

#include "ASTNode.h"
#include "../visitor/Visitor.h"

class Atom : public ASTNode {
    
public:
    std::string user;
    Literal *lit;

    /**< Constructor */
    explicit Atom(Literal *n) : lit(n), user("") {}
    Atom(std::string n) : user(n), lit(NULL) {}

    /**< Accepts the given void visitor by calling v.visit(this) */
    void accept(Visitor &v) {
        v.visit(this);
    }
    
};

#endif // AST_ATOM_H
