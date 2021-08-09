#ifndef fgl_AST_NODE_member_H
#define fgl_AST_NODE_member_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class member : public fgl<member>
	{
	private:
	public:
		member(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<member>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_member_H
