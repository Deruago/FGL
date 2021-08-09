#ifndef fgl_AST_NODE_deamerreserved_star__COMMA__instruction___H
#define fgl_AST_NODE_deamerreserved_star__COMMA__instruction___H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class deamerreserved_star__COMMA__instruction__ : public fgl<deamerreserved_star__COMMA__instruction__>
	{
	private:
	public:
		deamerreserved_star__COMMA__instruction__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<deamerreserved_star__COMMA__instruction__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_deamerreserved_star__COMMA__instruction___H
