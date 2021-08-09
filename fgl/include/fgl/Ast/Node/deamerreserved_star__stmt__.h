#ifndef fgl_AST_NODE_deamerreserved_star__stmt___H
#define fgl_AST_NODE_deamerreserved_star__stmt___H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class deamerreserved_star__stmt__ : public fgl<deamerreserved_star__stmt__>
	{
	private:
	public:
		deamerreserved_star__stmt__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<deamerreserved_star__stmt__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_deamerreserved_star__stmt___H
