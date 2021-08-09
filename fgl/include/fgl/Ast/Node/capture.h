#ifndef fgl_AST_NODE_capture_H
#define fgl_AST_NODE_capture_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class capture : public fgl<capture>
	{
	private:
	public:
		capture(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<capture>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_capture_H
