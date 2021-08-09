#ifndef fgl_AST_NODE_deamerreserved_arrow__member___H
#define fgl_AST_NODE_deamerreserved_arrow__member___H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class deamerreserved_arrow__member__ : public fgl<deamerreserved_arrow__member__>
	{
	private:
	public:
		deamerreserved_arrow__member__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<deamerreserved_arrow__member__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_deamerreserved_arrow__member___H
