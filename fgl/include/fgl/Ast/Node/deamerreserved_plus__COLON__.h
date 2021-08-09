#ifndef fgl_AST_NODE_deamerreserved_plus__COLON___H
#define fgl_AST_NODE_deamerreserved_plus__COLON___H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class deamerreserved_plus__COLON__ : public fgl<deamerreserved_plus__COLON__>
	{
	private:
	public:
		deamerreserved_plus__COLON__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<deamerreserved_plus__COLON__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_deamerreserved_plus__COLON___H
