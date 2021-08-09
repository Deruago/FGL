#ifndef fgl_AST_NODE_manipulation_H
#define fgl_AST_NODE_manipulation_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class manipulation : public fgl<manipulation>
	{
	private:
	public:
		manipulation(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<manipulation>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_manipulation_H
