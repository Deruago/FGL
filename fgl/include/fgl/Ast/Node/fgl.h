#ifndef fgl_AST_NODE_fgl_H
#define fgl_AST_NODE_fgl_H

#include <Deamer/External/Cpp/Ast/TemplateNodeBase.h>

namespace fgl { namespace ast { namespace node {

	template<typename Derived>
	class fgl : public ::deamer::external::cpp::ast::TemplateNodeBase<fgl<Derived>, Derived>
	{
	private:
		
	public:
		fgl() = default;
		
		fgl(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_ = {}, std::vector<size_t> baseValues_ = {})
		: deamer::external::cpp::ast::TemplateNodeBase<fgl<Derived>, Derived>(information_, nodes_, baseValues_)
		{
		}
	};

}}}

#endif // fgl_AST_NODE_fgl_H
