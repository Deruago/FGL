#ifndef FGL_AST_REFERENCE_ACCESS_H
#define FGL_AST_REFERENCE_ACCESS_H

#include "fgl/Ast/Relation/NodeEnumToType.h"
#include "fgl/Ast/Relation/NodeTypeToEnum.h"
#include "fgl/Ast/Relation/NodeIsInlined.h"

#include "fgl/Ast/Enum/Type.h"
#include "fgl/Ast/Node/program.h"
#include "fgl/Ast/Node/deamerreserved_star__stmt__.h"
#include "fgl/Ast/Node/stmt.h"
#include "fgl/Ast/Node/setting_rule.h"
#include "fgl/Ast/Node/entry_manipulation_rule.h"
#include "fgl/Ast/Node/exit_manipulation_rule.h"
#include "fgl/Ast/Node/capture.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__flavor_capture____.h"
#include "fgl/Ast/Node/deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.h"
#include "fgl/Ast/Node/manipulation.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__instruction____.h"
#include "fgl/Ast/Node/deamerreserved_star__COMMA__instruction__.h"
#include "fgl/Ast/Node/instruction.h"
#include "fgl/Ast/Node/new_flavor.h"
#include "fgl/Ast/Node/delete_flavor.h"
#include "fgl/Ast/Node/expand_flavor.h"
#include "fgl/Ast/Node/flavor_capture.h"
#include "fgl/Ast/Node/conditional_flavor.h"
#include "fgl/Ast/Node/value.h"
#include "fgl/Ast/Node/user_defined_instruction.h"
#include "fgl/Ast/Node/object.h"
#include "fgl/Ast/Node/object_access.h"
#include "fgl/Ast/Node/deamerreserved_arrow__member__.h"
#include "fgl/Ast/Node/deamerreserved_star__DOT__member__.h"
#include "fgl/Ast/Node/member.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__argument____.h"
#include "fgl/Ast/Node/deamerreserved_star__COMMA__argument__.h"
#include "fgl/Ast/Node/argument.h"
#include "fgl/Ast/Node/flavor.h"
#include "fgl/Ast/Node/flavor_specialization.h"
#include "fgl/Ast/Node/COMMENT.h"
#include "fgl/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "fgl/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "fgl/Ast/Node/LEFT_BRACKET.h"
#include "fgl/Ast/Node/RIGHT_BRACKET.h"
#include "fgl/Ast/Node/LEFT_PARANTHESIS.h"
#include "fgl/Ast/Node/RIGHT_PARANTHESIS.h"
#include "fgl/Ast/Node/COMMA.h"
#include "fgl/Ast/Node/DOT.h"
#include "fgl/Ast/Node/ARROW.h"
#include "fgl/Ast/Node/COLON.h"
#include "fgl/Ast/Node/NEW.h"
#include "fgl/Ast/Node/DELETE.h"
#include "fgl/Ast/Node/EXPAND.h"
#include "fgl/Ast/Node/WITH.h"
#include "fgl/Ast/Node/AND.h"
#include "fgl/Ast/Node/EQEQ.h"
#include "fgl/Ast/Node/EQ.h"
#include "fgl/Ast/Node/GTE.h"
#include "fgl/Ast/Node/GT.h"
#include "fgl/Ast/Node/LTE.h"
#include "fgl/Ast/Node/LT.h"
#include "fgl/Ast/Node/ADD.h"
#include "fgl/Ast/Node/MINUS.h"
#include "fgl/Ast/Node/TARGET_SETTING.h"
#include "fgl/Ast/Node/INCLUDE_SETTING.h"
#include "fgl/Ast/Node/MEMBER_SETTING.h"
#include "fgl/Ast/Node/FUNCTION_SETTING.h"
#include "fgl/Ast/Node/USER_INSERTED_SETTING.h"
#include "fgl/Ast/Node/VARNAME.h"
#include "fgl/Ast/Node/NUMBER.h"
#include "fgl/Ast/Node/STRING.h"
#include "fgl/Ast/Node/ESCAPE_CHARS.h"


#include <vector>
#include <utility>

namespace fgl { namespace ast { namespace relation { 

	struct AccessBase
	{	
	public:
		AccessBase() = default;

	protected:
		template<::fgl::ast::Type T>
		void Get(std::vector<const ::fgl::ast::relation::NodeEnumToType_t<T>*>& foundNodes, const ::deamer::external::cpp::ast::Node* currentNode)
		{
			for(const auto* const node : currentNode->GetNodes())
			{
				if (node->GetType() == static_cast<::std::size_t>(T))
				{
					foundNodes.push_back(static_cast<const  ::fgl::ast::relation::NodeEnumToType_t<T>*>(node));
				}
				else if (::fgl::ast::relation::NodeIsInlined(static_cast<::fgl::ast::Type>(node->GetType())))
				{
					Get<T>(foundNodes, node);
				}
			}
		}

		template<::fgl::ast::Type T, typename Q>
		inline std::vector<const ::fgl::ast::relation::NodeEnumToType_t<T>*> Get(std::vector<const Q*>& currentNodes)
		{
			std::vector<const ::fgl::ast::relation::NodeEnumToType_t<T>*> foundNodes;

			for (const auto* const currentNode : currentNodes)
			{
				AccessBase::Get<T>(foundNodes, currentNode);
			}

			return foundNodes;
		}
	};

	/*!	\class Access
	 *
	 *	\brief Used to access AST nodes. It contains various helper functions to ease navigation through AST nodes.
	 */
	template<typename T>
	struct Access : public AccessBase
	{
		Access() = delete;
		~Access() = delete;
	};

	template<>
	struct Access<::fgl::ast::node::program>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__stmt__>;
	template<>
	struct Access<::fgl::ast::node::stmt>;
	template<>
	struct Access<::fgl::ast::node::setting_rule>;
	template<>
	struct Access<::fgl::ast::node::entry_manipulation_rule>;
	template<>
	struct Access<::fgl::ast::node::exit_manipulation_rule>;
	template<>
	struct Access<::fgl::ast::node::capture>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>;
	template<>
	struct Access<::fgl::ast::node::manipulation>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>;
	template<>
	struct Access<::fgl::ast::node::instruction>;
	template<>
	struct Access<::fgl::ast::node::new_flavor>;
	template<>
	struct Access<::fgl::ast::node::delete_flavor>;
	template<>
	struct Access<::fgl::ast::node::expand_flavor>;
	template<>
	struct Access<::fgl::ast::node::flavor_capture>;
	template<>
	struct Access<::fgl::ast::node::conditional_flavor>;
	template<>
	struct Access<::fgl::ast::node::value>;
	template<>
	struct Access<::fgl::ast::node::user_defined_instruction>;
	template<>
	struct Access<::fgl::ast::node::object>;
	template<>
	struct Access<::fgl::ast::node::object_access>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_arrow__member__>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__DOT__member__>;
	template<>
	struct Access<::fgl::ast::node::member>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>;
	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>;
	template<>
	struct Access<::fgl::ast::node::argument>;
	template<>
	struct Access<::fgl::ast::node::flavor>;
	template<>
	struct Access<::fgl::ast::node::flavor_specialization>;
	template<>
	struct Access<::fgl::ast::node::COMMENT>;
	template<>
	struct Access<::fgl::ast::node::LEFT_SQUARE_BRACKET>;
	template<>
	struct Access<::fgl::ast::node::RIGHT_SQUARE_BRACKET>;
	template<>
	struct Access<::fgl::ast::node::LEFT_BRACKET>;
	template<>
	struct Access<::fgl::ast::node::RIGHT_BRACKET>;
	template<>
	struct Access<::fgl::ast::node::LEFT_PARANTHESIS>;
	template<>
	struct Access<::fgl::ast::node::RIGHT_PARANTHESIS>;
	template<>
	struct Access<::fgl::ast::node::COMMA>;
	template<>
	struct Access<::fgl::ast::node::DOT>;
	template<>
	struct Access<::fgl::ast::node::ARROW>;
	template<>
	struct Access<::fgl::ast::node::COLON>;
	template<>
	struct Access<::fgl::ast::node::NEW>;
	template<>
	struct Access<::fgl::ast::node::DELETE>;
	template<>
	struct Access<::fgl::ast::node::EXPAND>;
	template<>
	struct Access<::fgl::ast::node::WITH>;
	template<>
	struct Access<::fgl::ast::node::AND>;
	template<>
	struct Access<::fgl::ast::node::EQEQ>;
	template<>
	struct Access<::fgl::ast::node::EQ>;
	template<>
	struct Access<::fgl::ast::node::GTE>;
	template<>
	struct Access<::fgl::ast::node::GT>;
	template<>
	struct Access<::fgl::ast::node::LTE>;
	template<>
	struct Access<::fgl::ast::node::LT>;
	template<>
	struct Access<::fgl::ast::node::ADD>;
	template<>
	struct Access<::fgl::ast::node::MINUS>;
	template<>
	struct Access<::fgl::ast::node::TARGET_SETTING>;
	template<>
	struct Access<::fgl::ast::node::INCLUDE_SETTING>;
	template<>
	struct Access<::fgl::ast::node::MEMBER_SETTING>;
	template<>
	struct Access<::fgl::ast::node::FUNCTION_SETTING>;
	template<>
	struct Access<::fgl::ast::node::USER_INSERTED_SETTING>;
	template<>
	struct Access<::fgl::ast::node::VARNAME>;
	template<>
	struct Access<::fgl::ast::node::NUMBER>;
	template<>
	struct Access<::fgl::ast::node::STRING>;
	template<>
	struct Access<::fgl::ast::node::ESCAPE_CHARS>;


	
	template<>
	struct Access<::fgl::ast::node::program> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::program*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::program*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::program& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::program* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::program>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::program>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::program*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::program*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__stmt__> deamerreserved_star__stmt__();
Access<::fgl::ast::node::stmt> stmt();


		template<typename FunctionType>
		Access<::fgl::ast::node::program>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__stmt__> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_star__stmt__*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_star__stmt__*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__stmt__& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__stmt__* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_star__stmt__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_star__stmt__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_star__stmt__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_star__stmt__*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__stmt__> deamerreserved_star__stmt__();
Access<::fgl::ast::node::stmt> stmt();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_star__stmt__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::stmt> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::stmt*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::stmt*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::stmt& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::stmt* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::stmt*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::setting_rule> setting_rule();
Access<::fgl::ast::node::entry_manipulation_rule> entry_manipulation_rule();
Access<::fgl::ast::node::exit_manipulation_rule> exit_manipulation_rule();


		template<typename FunctionType>
		Access<::fgl::ast::node::stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::setting_rule> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::setting_rule*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::setting_rule*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::setting_rule& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::setting_rule* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::setting_rule>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::setting_rule>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::setting_rule*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::setting_rule*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::TARGET_SETTING> TARGET_SETTING();
Access<::fgl::ast::node::INCLUDE_SETTING> INCLUDE_SETTING();
Access<::fgl::ast::node::MEMBER_SETTING> MEMBER_SETTING();
Access<::fgl::ast::node::FUNCTION_SETTING> FUNCTION_SETTING();
Access<::fgl::ast::node::USER_INSERTED_SETTING> USER_INSERTED_SETTING();


		template<typename FunctionType>
		Access<::fgl::ast::node::setting_rule>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::entry_manipulation_rule> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::entry_manipulation_rule*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::entry_manipulation_rule*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::entry_manipulation_rule& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::entry_manipulation_rule* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::entry_manipulation_rule>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::entry_manipulation_rule>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::entry_manipulation_rule*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::entry_manipulation_rule*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::capture> capture();
Access<::fgl::ast::node::manipulation> manipulation();
Access<::fgl::ast::node::object> object();
Access<::fgl::ast::node::ARROW> ARROW();
Access<::fgl::ast::node::ADD> ADD();


		template<typename FunctionType>
		Access<::fgl::ast::node::entry_manipulation_rule>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::exit_manipulation_rule> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::exit_manipulation_rule*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::exit_manipulation_rule*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::exit_manipulation_rule& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::exit_manipulation_rule* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::exit_manipulation_rule>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::exit_manipulation_rule>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::exit_manipulation_rule*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::exit_manipulation_rule*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::capture> capture();
Access<::fgl::ast::node::manipulation> manipulation();
Access<::fgl::ast::node::object> object();
Access<::fgl::ast::node::ARROW> ARROW();
Access<::fgl::ast::node::MINUS> MINUS();


		template<typename FunctionType>
		Access<::fgl::ast::node::exit_manipulation_rule>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::capture> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::capture*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::capture*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::capture& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::capture* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::capture>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::capture>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::capture*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::capture*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____> deamerreserved_arrow__deamerreserved_optional__flavor_capture____();
Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__> deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__();
Access<::fgl::ast::node::flavor_capture> flavor_capture();
Access<::fgl::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
Access<::fgl::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
Access<::fgl::ast::node::COMMA> COMMA();
Access<::fgl::ast::node::AND> AND();


		template<typename FunctionType>
		Access<::fgl::ast::node::capture>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__> deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__();
Access<::fgl::ast::node::flavor_capture> flavor_capture();
Access<::fgl::ast::node::COMMA> COMMA();
Access<::fgl::ast::node::AND> AND();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__> deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__();
Access<::fgl::ast::node::flavor_capture> flavor_capture();
Access<::fgl::ast::node::COMMA> COMMA();
Access<::fgl::ast::node::AND> AND();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::manipulation> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::manipulation*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::manipulation*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::manipulation& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::manipulation* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::manipulation>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::manipulation>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::manipulation*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::manipulation*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____> deamerreserved_arrow__deamerreserved_optional__instruction____();
Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__> deamerreserved_star__COMMA__instruction__();
Access<::fgl::ast::node::instruction> instruction();
Access<::fgl::ast::node::LEFT_BRACKET> LEFT_BRACKET();
Access<::fgl::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
Access<::fgl::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		Access<::fgl::ast::node::manipulation>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__> deamerreserved_star__COMMA__instruction__();
Access<::fgl::ast::node::instruction> instruction();
Access<::fgl::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_star__COMMA__instruction__*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_star__COMMA__instruction__*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__COMMA__instruction__& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__COMMA__instruction__* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_star__COMMA__instruction__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_star__COMMA__instruction__*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__> deamerreserved_star__COMMA__instruction__();
Access<::fgl::ast::node::instruction> instruction();
Access<::fgl::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::instruction> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::instruction*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::instruction*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::instruction& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::instruction* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::instruction>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::instruction>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::instruction*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::instruction*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::new_flavor> new_flavor();
Access<::fgl::ast::node::delete_flavor> delete_flavor();
Access<::fgl::ast::node::expand_flavor> expand_flavor();
Access<::fgl::ast::node::user_defined_instruction> user_defined_instruction();


		template<typename FunctionType>
		Access<::fgl::ast::node::instruction>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::new_flavor> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::new_flavor*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::new_flavor*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::new_flavor& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::new_flavor* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::new_flavor>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::new_flavor>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::new_flavor*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::new_flavor*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::flavor> flavor();
Access<::fgl::ast::node::DOT> DOT();
Access<::fgl::ast::node::NEW> NEW();


		template<typename FunctionType>
		Access<::fgl::ast::node::new_flavor>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::delete_flavor> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::delete_flavor*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::delete_flavor*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::delete_flavor& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::delete_flavor* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::delete_flavor>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::delete_flavor>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::delete_flavor*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::delete_flavor*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::flavor> flavor();
Access<::fgl::ast::node::DOT> DOT();
Access<::fgl::ast::node::DELETE> DELETE();


		template<typename FunctionType>
		Access<::fgl::ast::node::delete_flavor>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::expand_flavor> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::expand_flavor*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::expand_flavor*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::expand_flavor& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::expand_flavor* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::expand_flavor>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::expand_flavor>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::expand_flavor*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::expand_flavor*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::value> value();
Access<::fgl::ast::node::flavor> flavor();
Access<::fgl::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
Access<::fgl::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
Access<::fgl::ast::node::DOT> DOT();
Access<::fgl::ast::node::EXPAND> EXPAND();
Access<::fgl::ast::node::WITH> WITH();


		template<typename FunctionType>
		Access<::fgl::ast::node::expand_flavor>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::flavor_capture> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::flavor_capture*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::flavor_capture*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::flavor_capture& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::flavor_capture* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::flavor_capture>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::flavor_capture>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::flavor_capture*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::flavor_capture*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::conditional_flavor> conditional_flavor();
Access<::fgl::ast::node::flavor> flavor();


		template<typename FunctionType>
		Access<::fgl::ast::node::flavor_capture>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::conditional_flavor> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::conditional_flavor*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::conditional_flavor*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::conditional_flavor& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::conditional_flavor* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::conditional_flavor>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::conditional_flavor>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::conditional_flavor*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::conditional_flavor*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::value> value();
Access<::fgl::ast::node::EQEQ> EQEQ();
Access<::fgl::ast::node::GTE> GTE();
Access<::fgl::ast::node::GT> GT();
Access<::fgl::ast::node::LTE> LTE();
Access<::fgl::ast::node::LT> LT();


		template<typename FunctionType>
		Access<::fgl::ast::node::conditional_flavor>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::value> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::value*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::value*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::value& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::value* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::value>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::value>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::value*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::value*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::object_access> object_access();
Access<::fgl::ast::node::NUMBER> NUMBER();
Access<::fgl::ast::node::STRING> STRING();


		template<typename FunctionType>
		Access<::fgl::ast::node::value>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::user_defined_instruction> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::user_defined_instruction*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::user_defined_instruction*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::user_defined_instruction& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::user_defined_instruction* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::user_defined_instruction>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::user_defined_instruction>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::user_defined_instruction*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::user_defined_instruction*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::value> value();


		template<typename FunctionType>
		Access<::fgl::ast::node::user_defined_instruction>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::object> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::object*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::object*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::object& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::object* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::object>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::object>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::object*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::object*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		Access<::fgl::ast::node::object>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::object_access> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::object_access*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::object_access*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::object_access& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::object_access* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::object_access>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::object_access>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::object_access*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::object_access*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_arrow__member__> deamerreserved_arrow__member__();
Access<::fgl::ast::node::deamerreserved_star__DOT__member__> deamerreserved_star__DOT__member__();
Access<::fgl::ast::node::member> member();
Access<::fgl::ast::node::DOT> DOT();


		template<typename FunctionType>
		Access<::fgl::ast::node::object_access>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_arrow__member__> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_arrow__member__*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_arrow__member__*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_arrow__member__& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_arrow__member__* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_arrow__member__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_arrow__member__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_arrow__member__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_arrow__member__*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__DOT__member__> deamerreserved_star__DOT__member__();
Access<::fgl::ast::node::member> member();
Access<::fgl::ast::node::DOT> DOT();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_arrow__member__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__DOT__member__> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_star__DOT__member__*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_star__DOT__member__*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__DOT__member__& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__DOT__member__* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_star__DOT__member__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_star__DOT__member__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_star__DOT__member__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_star__DOT__member__*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__DOT__member__> deamerreserved_star__DOT__member__();
Access<::fgl::ast::node::member> member();
Access<::fgl::ast::node::DOT> DOT();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_star__DOT__member__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::member> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::member*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::member*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::member& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::member* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::member>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::member>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::member*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::member*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____> deamerreserved_arrow__deamerreserved_optional__argument____();
Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__> deamerreserved_star__COMMA__argument__();
Access<::fgl::ast::node::argument> argument();
Access<::fgl::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
Access<::fgl::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
Access<::fgl::ast::node::COMMA> COMMA();
Access<::fgl::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		Access<::fgl::ast::node::member>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__> deamerreserved_star__COMMA__argument__();
Access<::fgl::ast::node::argument> argument();
Access<::fgl::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::deamerreserved_star__COMMA__argument__*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::deamerreserved_star__COMMA__argument__*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__COMMA__argument__& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::deamerreserved_star__COMMA__argument__* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::deamerreserved_star__COMMA__argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::deamerreserved_star__COMMA__argument__*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__> deamerreserved_star__COMMA__argument__();
Access<::fgl::ast::node::argument> argument();
Access<::fgl::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::argument> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::argument*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::argument*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::argument& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::argument* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::argument*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::value> value();


		template<typename FunctionType>
		Access<::fgl::ast::node::argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::flavor> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::flavor*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::flavor*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::flavor& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::flavor* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::flavor>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::flavor>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::flavor*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::flavor*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::flavor_specialization> flavor_specialization();
Access<::fgl::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		Access<::fgl::ast::node::flavor>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::flavor_specialization> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::flavor_specialization*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::flavor_specialization*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::flavor_specialization& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::flavor_specialization* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::flavor_specialization>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::flavor_specialization>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::flavor_specialization*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::flavor_specialization*> GetContent()
		{
			return ts;
		}

	public:
		Access<::fgl::ast::node::value> value();
Access<::fgl::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
Access<::fgl::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();


		template<typename FunctionType>
		Access<::fgl::ast::node::flavor_specialization>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::COMMENT> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::COMMENT*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::COMMENT*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::COMMENT& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::COMMENT* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::COMMENT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::COMMENT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::COMMENT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::COMMENT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::COMMENT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::LEFT_SQUARE_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::LEFT_SQUARE_BRACKET*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::LEFT_SQUARE_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::LEFT_SQUARE_BRACKET& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::LEFT_SQUARE_BRACKET* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::LEFT_SQUARE_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::LEFT_SQUARE_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::LEFT_SQUARE_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::LEFT_SQUARE_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::LEFT_SQUARE_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::RIGHT_SQUARE_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::RIGHT_SQUARE_BRACKET*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::RIGHT_SQUARE_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::RIGHT_SQUARE_BRACKET& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::RIGHT_SQUARE_BRACKET* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::RIGHT_SQUARE_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::RIGHT_SQUARE_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::RIGHT_SQUARE_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::RIGHT_SQUARE_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::RIGHT_SQUARE_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::LEFT_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::LEFT_BRACKET*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::LEFT_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::LEFT_BRACKET& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::LEFT_BRACKET* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::LEFT_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::LEFT_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::LEFT_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::LEFT_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::LEFT_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::RIGHT_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::RIGHT_BRACKET*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::RIGHT_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::RIGHT_BRACKET& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::RIGHT_BRACKET* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::RIGHT_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::RIGHT_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::RIGHT_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::RIGHT_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::RIGHT_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::LEFT_PARANTHESIS> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::LEFT_PARANTHESIS*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::LEFT_PARANTHESIS*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::LEFT_PARANTHESIS& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::LEFT_PARANTHESIS* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::LEFT_PARANTHESIS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::LEFT_PARANTHESIS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::LEFT_PARANTHESIS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::LEFT_PARANTHESIS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::LEFT_PARANTHESIS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::RIGHT_PARANTHESIS> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::RIGHT_PARANTHESIS*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::RIGHT_PARANTHESIS*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::RIGHT_PARANTHESIS& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::RIGHT_PARANTHESIS* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::RIGHT_PARANTHESIS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::RIGHT_PARANTHESIS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::RIGHT_PARANTHESIS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::RIGHT_PARANTHESIS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::RIGHT_PARANTHESIS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::COMMA> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::COMMA*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::COMMA*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::COMMA& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::COMMA* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::COMMA>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::COMMA>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::COMMA*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::COMMA*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::COMMA>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::DOT> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::DOT*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::DOT*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::DOT& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::DOT* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::DOT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::DOT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::DOT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::DOT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::DOT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::ARROW> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::ARROW*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::ARROW*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::ARROW& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::ARROW* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::ARROW>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::ARROW>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::ARROW*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::ARROW*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::ARROW>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::COLON> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::COLON*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::COLON*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::COLON& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::COLON* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::COLON>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::COLON>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::COLON*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::COLON*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::COLON>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::NEW> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::NEW*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::NEW*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::NEW& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::NEW* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::NEW>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::NEW>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::NEW*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::NEW*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::NEW>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::DELETE> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::DELETE*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::DELETE*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::DELETE& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::DELETE* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::DELETE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::DELETE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::DELETE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::DELETE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::DELETE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::EXPAND> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::EXPAND*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::EXPAND*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::EXPAND& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::EXPAND* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::EXPAND>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::EXPAND>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::EXPAND*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::EXPAND*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::EXPAND>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::WITH> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::WITH*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::WITH*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::WITH& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::WITH* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::WITH>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::WITH>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::WITH*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::WITH*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::WITH>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::AND> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::AND*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::AND*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::AND& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::AND* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::AND>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::AND>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::AND*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::AND*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::AND>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::EQEQ> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::EQEQ*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::EQEQ*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::EQEQ& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::EQEQ* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::EQEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::EQEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::EQEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::EQEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::EQEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::EQ> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::EQ*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::EQ*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::EQ& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::EQ* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::EQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::EQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::EQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::EQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::EQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::GTE> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::GTE*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::GTE*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::GTE& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::GTE* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::GTE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::GTE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::GTE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::GTE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::GTE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::GT> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::GT*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::GT*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::GT& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::GT* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::GT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::GT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::GT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::GT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::GT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::LTE> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::LTE*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::LTE*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::LTE& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::LTE* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::LTE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::LTE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::LTE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::LTE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::LTE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::LT> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::LT*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::LT*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::LT& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::LT* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::LT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::LT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::LT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::LT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::LT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::ADD> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::ADD*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::ADD*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::ADD& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::ADD* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::ADD>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::ADD>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::ADD*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::ADD*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::ADD>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::MINUS> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::MINUS*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::MINUS*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::MINUS& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::MINUS* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::MINUS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::MINUS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::MINUS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::MINUS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::MINUS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::TARGET_SETTING> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::TARGET_SETTING*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::TARGET_SETTING*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::TARGET_SETTING& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::TARGET_SETTING* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::TARGET_SETTING>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::TARGET_SETTING>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::TARGET_SETTING*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::TARGET_SETTING*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::TARGET_SETTING>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::INCLUDE_SETTING> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::INCLUDE_SETTING*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::INCLUDE_SETTING*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::INCLUDE_SETTING& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::INCLUDE_SETTING* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::INCLUDE_SETTING>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::INCLUDE_SETTING>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::INCLUDE_SETTING*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::INCLUDE_SETTING*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::INCLUDE_SETTING>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::MEMBER_SETTING> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::MEMBER_SETTING*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::MEMBER_SETTING*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::MEMBER_SETTING& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::MEMBER_SETTING* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::MEMBER_SETTING>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::MEMBER_SETTING>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::MEMBER_SETTING*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::MEMBER_SETTING*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::MEMBER_SETTING>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::FUNCTION_SETTING> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::FUNCTION_SETTING*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::FUNCTION_SETTING*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::FUNCTION_SETTING& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::FUNCTION_SETTING* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::FUNCTION_SETTING>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::FUNCTION_SETTING>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::FUNCTION_SETTING*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::FUNCTION_SETTING*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::FUNCTION_SETTING>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::USER_INSERTED_SETTING> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::USER_INSERTED_SETTING*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::USER_INSERTED_SETTING*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::USER_INSERTED_SETTING& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::USER_INSERTED_SETTING* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::USER_INSERTED_SETTING>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::USER_INSERTED_SETTING>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::USER_INSERTED_SETTING*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::USER_INSERTED_SETTING*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::USER_INSERTED_SETTING>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::VARNAME> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::VARNAME*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::VARNAME*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::VARNAME& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::VARNAME* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::VARNAME>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::VARNAME>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::VARNAME*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::VARNAME*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::VARNAME>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::NUMBER> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::NUMBER*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::NUMBER*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::NUMBER& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::NUMBER* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::NUMBER>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::NUMBER>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::NUMBER*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::NUMBER*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::NUMBER>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::STRING> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::STRING*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::STRING*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::STRING& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::STRING* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::STRING>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::STRING>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::STRING*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::STRING*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::STRING>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::fgl::ast::node::ESCAPE_CHARS> : public AccessBase
	{
	protected:
		std::vector<const ::fgl::ast::node::ESCAPE_CHARS*> ts;

	public:
		Access(std::vector<const ::fgl::ast::node::ESCAPE_CHARS*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::fgl::ast::node::ESCAPE_CHARS& t) : ts({&t})
		{
		}

		Access(const ::fgl::ast::node::ESCAPE_CHARS* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::fgl::ast::node::ESCAPE_CHARS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::fgl::ast::node::ESCAPE_CHARS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::fgl::ast::node::ESCAPE_CHARS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::fgl::ast::node::ESCAPE_CHARS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::fgl::ast::node::ESCAPE_CHARS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};


	
		inline Access<::fgl::ast::node::deamerreserved_star__stmt__> Access<::fgl::ast::node::program>::deamerreserved_star__stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__stmt__>(Get<::fgl::ast::Type::deamerreserved_star__stmt__>(ts));
		}

		inline Access<::fgl::ast::node::stmt> Access<::fgl::ast::node::program>::stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::stmt>(Get<::fgl::ast::Type::stmt>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__stmt__> Access<::fgl::ast::node::deamerreserved_star__stmt__>::deamerreserved_star__stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__stmt__>(Get<::fgl::ast::Type::deamerreserved_star__stmt__>(ts));
		}

		inline Access<::fgl::ast::node::stmt> Access<::fgl::ast::node::deamerreserved_star__stmt__>::stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::stmt>(Get<::fgl::ast::Type::stmt>(ts));
		}

		inline Access<::fgl::ast::node::setting_rule> Access<::fgl::ast::node::stmt>::setting_rule()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::setting_rule>(Get<::fgl::ast::Type::setting_rule>(ts));
		}

		inline Access<::fgl::ast::node::entry_manipulation_rule> Access<::fgl::ast::node::stmt>::entry_manipulation_rule()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::entry_manipulation_rule>(Get<::fgl::ast::Type::entry_manipulation_rule>(ts));
		}

		inline Access<::fgl::ast::node::exit_manipulation_rule> Access<::fgl::ast::node::stmt>::exit_manipulation_rule()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::exit_manipulation_rule>(Get<::fgl::ast::Type::exit_manipulation_rule>(ts));
		}

		inline Access<::fgl::ast::node::TARGET_SETTING> Access<::fgl::ast::node::setting_rule>::TARGET_SETTING()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::TARGET_SETTING>(Get<::fgl::ast::Type::TARGET_SETTING>(ts));
		}

		inline Access<::fgl::ast::node::INCLUDE_SETTING> Access<::fgl::ast::node::setting_rule>::INCLUDE_SETTING()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::INCLUDE_SETTING>(Get<::fgl::ast::Type::INCLUDE_SETTING>(ts));
		}

		inline Access<::fgl::ast::node::MEMBER_SETTING> Access<::fgl::ast::node::setting_rule>::MEMBER_SETTING()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::MEMBER_SETTING>(Get<::fgl::ast::Type::MEMBER_SETTING>(ts));
		}

		inline Access<::fgl::ast::node::FUNCTION_SETTING> Access<::fgl::ast::node::setting_rule>::FUNCTION_SETTING()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::FUNCTION_SETTING>(Get<::fgl::ast::Type::FUNCTION_SETTING>(ts));
		}

		inline Access<::fgl::ast::node::USER_INSERTED_SETTING> Access<::fgl::ast::node::setting_rule>::USER_INSERTED_SETTING()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::USER_INSERTED_SETTING>(Get<::fgl::ast::Type::USER_INSERTED_SETTING>(ts));
		}

		inline Access<::fgl::ast::node::capture> Access<::fgl::ast::node::entry_manipulation_rule>::capture()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::capture>(Get<::fgl::ast::Type::capture>(ts));
		}

		inline Access<::fgl::ast::node::manipulation> Access<::fgl::ast::node::entry_manipulation_rule>::manipulation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::manipulation>(Get<::fgl::ast::Type::manipulation>(ts));
		}

		inline Access<::fgl::ast::node::object> Access<::fgl::ast::node::entry_manipulation_rule>::object()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::object>(Get<::fgl::ast::Type::object>(ts));
		}

		inline Access<::fgl::ast::node::ARROW> Access<::fgl::ast::node::entry_manipulation_rule>::ARROW()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::ARROW>(Get<::fgl::ast::Type::ARROW>(ts));
		}

		inline Access<::fgl::ast::node::ADD> Access<::fgl::ast::node::entry_manipulation_rule>::ADD()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::ADD>(Get<::fgl::ast::Type::ADD>(ts));
		}

		inline Access<::fgl::ast::node::capture> Access<::fgl::ast::node::exit_manipulation_rule>::capture()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::capture>(Get<::fgl::ast::Type::capture>(ts));
		}

		inline Access<::fgl::ast::node::manipulation> Access<::fgl::ast::node::exit_manipulation_rule>::manipulation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::manipulation>(Get<::fgl::ast::Type::manipulation>(ts));
		}

		inline Access<::fgl::ast::node::object> Access<::fgl::ast::node::exit_manipulation_rule>::object()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::object>(Get<::fgl::ast::Type::object>(ts));
		}

		inline Access<::fgl::ast::node::ARROW> Access<::fgl::ast::node::exit_manipulation_rule>::ARROW()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::ARROW>(Get<::fgl::ast::Type::ARROW>(ts));
		}

		inline Access<::fgl::ast::node::MINUS> Access<::fgl::ast::node::exit_manipulation_rule>::MINUS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::MINUS>(Get<::fgl::ast::Type::MINUS>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____> Access<::fgl::ast::node::capture>::deamerreserved_arrow__deamerreserved_optional__flavor_capture____()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>(Get<::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__> Access<::fgl::ast::node::capture>::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>(Get<::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>(ts));
		}

		inline Access<::fgl::ast::node::flavor_capture> Access<::fgl::ast::node::capture>::flavor_capture()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::flavor_capture>(Get<::fgl::ast::Type::flavor_capture>(ts));
		}

		inline Access<::fgl::ast::node::LEFT_SQUARE_BRACKET> Access<::fgl::ast::node::capture>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::LEFT_SQUARE_BRACKET>(Get<::fgl::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline Access<::fgl::ast::node::RIGHT_SQUARE_BRACKET> Access<::fgl::ast::node::capture>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::RIGHT_SQUARE_BRACKET>(Get<::fgl::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::capture>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::AND> Access<::fgl::ast::node::capture>::AND()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::AND>(Get<::fgl::ast::Type::AND>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>(Get<::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>(ts));
		}

		inline Access<::fgl::ast::node::flavor_capture> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>::flavor_capture()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::flavor_capture>(Get<::fgl::ast::Type::flavor_capture>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::AND> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>::AND()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::AND>(Get<::fgl::ast::Type::AND>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__> Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>(Get<::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>(ts));
		}

		inline Access<::fgl::ast::node::flavor_capture> Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>::flavor_capture()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::flavor_capture>(Get<::fgl::ast::Type::flavor_capture>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::AND> Access<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>::AND()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::AND>(Get<::fgl::ast::Type::AND>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____> Access<::fgl::ast::node::manipulation>::deamerreserved_arrow__deamerreserved_optional__instruction____()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>(Get<::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__> Access<::fgl::ast::node::manipulation>::deamerreserved_star__COMMA__instruction__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>(Get<::fgl::ast::Type::deamerreserved_star__COMMA__instruction__>(ts));
		}

		inline Access<::fgl::ast::node::instruction> Access<::fgl::ast::node::manipulation>::instruction()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::instruction>(Get<::fgl::ast::Type::instruction>(ts));
		}

		inline Access<::fgl::ast::node::LEFT_BRACKET> Access<::fgl::ast::node::manipulation>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::LEFT_BRACKET>(Get<::fgl::ast::Type::LEFT_BRACKET>(ts));
		}

		inline Access<::fgl::ast::node::RIGHT_BRACKET> Access<::fgl::ast::node::manipulation>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::RIGHT_BRACKET>(Get<::fgl::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::manipulation>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>::deamerreserved_star__COMMA__instruction__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>(Get<::fgl::ast::Type::deamerreserved_star__COMMA__instruction__>(ts));
		}

		inline Access<::fgl::ast::node::instruction> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>::instruction()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::instruction>(Get<::fgl::ast::Type::instruction>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__> Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>::deamerreserved_star__COMMA__instruction__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>(Get<::fgl::ast::Type::deamerreserved_star__COMMA__instruction__>(ts));
		}

		inline Access<::fgl::ast::node::instruction> Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>::instruction()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::instruction>(Get<::fgl::ast::Type::instruction>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::new_flavor> Access<::fgl::ast::node::instruction>::new_flavor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::new_flavor>(Get<::fgl::ast::Type::new_flavor>(ts));
		}

		inline Access<::fgl::ast::node::delete_flavor> Access<::fgl::ast::node::instruction>::delete_flavor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::delete_flavor>(Get<::fgl::ast::Type::delete_flavor>(ts));
		}

		inline Access<::fgl::ast::node::expand_flavor> Access<::fgl::ast::node::instruction>::expand_flavor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::expand_flavor>(Get<::fgl::ast::Type::expand_flavor>(ts));
		}

		inline Access<::fgl::ast::node::user_defined_instruction> Access<::fgl::ast::node::instruction>::user_defined_instruction()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::user_defined_instruction>(Get<::fgl::ast::Type::user_defined_instruction>(ts));
		}

		inline Access<::fgl::ast::node::flavor> Access<::fgl::ast::node::new_flavor>::flavor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::flavor>(Get<::fgl::ast::Type::flavor>(ts));
		}

		inline Access<::fgl::ast::node::DOT> Access<::fgl::ast::node::new_flavor>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::DOT>(Get<::fgl::ast::Type::DOT>(ts));
		}

		inline Access<::fgl::ast::node::NEW> Access<::fgl::ast::node::new_flavor>::NEW()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::NEW>(Get<::fgl::ast::Type::NEW>(ts));
		}

		inline Access<::fgl::ast::node::flavor> Access<::fgl::ast::node::delete_flavor>::flavor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::flavor>(Get<::fgl::ast::Type::flavor>(ts));
		}

		inline Access<::fgl::ast::node::DOT> Access<::fgl::ast::node::delete_flavor>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::DOT>(Get<::fgl::ast::Type::DOT>(ts));
		}

		inline Access<::fgl::ast::node::DELETE> Access<::fgl::ast::node::delete_flavor>::DELETE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::DELETE>(Get<::fgl::ast::Type::DELETE>(ts));
		}

		inline Access<::fgl::ast::node::value> Access<::fgl::ast::node::expand_flavor>::value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::value>(Get<::fgl::ast::Type::value>(ts));
		}

		inline Access<::fgl::ast::node::flavor> Access<::fgl::ast::node::expand_flavor>::flavor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::flavor>(Get<::fgl::ast::Type::flavor>(ts));
		}

		inline Access<::fgl::ast::node::LEFT_PARANTHESIS> Access<::fgl::ast::node::expand_flavor>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::LEFT_PARANTHESIS>(Get<::fgl::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline Access<::fgl::ast::node::RIGHT_PARANTHESIS> Access<::fgl::ast::node::expand_flavor>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::RIGHT_PARANTHESIS>(Get<::fgl::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline Access<::fgl::ast::node::DOT> Access<::fgl::ast::node::expand_flavor>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::DOT>(Get<::fgl::ast::Type::DOT>(ts));
		}

		inline Access<::fgl::ast::node::EXPAND> Access<::fgl::ast::node::expand_flavor>::EXPAND()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::EXPAND>(Get<::fgl::ast::Type::EXPAND>(ts));
		}

		inline Access<::fgl::ast::node::WITH> Access<::fgl::ast::node::expand_flavor>::WITH()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::WITH>(Get<::fgl::ast::Type::WITH>(ts));
		}

		inline Access<::fgl::ast::node::conditional_flavor> Access<::fgl::ast::node::flavor_capture>::conditional_flavor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::conditional_flavor>(Get<::fgl::ast::Type::conditional_flavor>(ts));
		}

		inline Access<::fgl::ast::node::flavor> Access<::fgl::ast::node::flavor_capture>::flavor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::flavor>(Get<::fgl::ast::Type::flavor>(ts));
		}

		inline Access<::fgl::ast::node::value> Access<::fgl::ast::node::conditional_flavor>::value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::value>(Get<::fgl::ast::Type::value>(ts));
		}

		inline Access<::fgl::ast::node::EQEQ> Access<::fgl::ast::node::conditional_flavor>::EQEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::EQEQ>(Get<::fgl::ast::Type::EQEQ>(ts));
		}

		inline Access<::fgl::ast::node::GTE> Access<::fgl::ast::node::conditional_flavor>::GTE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::GTE>(Get<::fgl::ast::Type::GTE>(ts));
		}

		inline Access<::fgl::ast::node::GT> Access<::fgl::ast::node::conditional_flavor>::GT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::GT>(Get<::fgl::ast::Type::GT>(ts));
		}

		inline Access<::fgl::ast::node::LTE> Access<::fgl::ast::node::conditional_flavor>::LTE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::LTE>(Get<::fgl::ast::Type::LTE>(ts));
		}

		inline Access<::fgl::ast::node::LT> Access<::fgl::ast::node::conditional_flavor>::LT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::LT>(Get<::fgl::ast::Type::LT>(ts));
		}

		inline Access<::fgl::ast::node::object_access> Access<::fgl::ast::node::value>::object_access()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::object_access>(Get<::fgl::ast::Type::object_access>(ts));
		}

		inline Access<::fgl::ast::node::NUMBER> Access<::fgl::ast::node::value>::NUMBER()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::NUMBER>(Get<::fgl::ast::Type::NUMBER>(ts));
		}

		inline Access<::fgl::ast::node::STRING> Access<::fgl::ast::node::value>::STRING()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::STRING>(Get<::fgl::ast::Type::STRING>(ts));
		}

		inline Access<::fgl::ast::node::value> Access<::fgl::ast::node::user_defined_instruction>::value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::value>(Get<::fgl::ast::Type::value>(ts));
		}

		inline Access<::fgl::ast::node::VARNAME> Access<::fgl::ast::node::object>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::VARNAME>(Get<::fgl::ast::Type::VARNAME>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_arrow__member__> Access<::fgl::ast::node::object_access>::deamerreserved_arrow__member__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_arrow__member__>(Get<::fgl::ast::Type::deamerreserved_arrow__member__>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__DOT__member__> Access<::fgl::ast::node::object_access>::deamerreserved_star__DOT__member__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__DOT__member__>(Get<::fgl::ast::Type::deamerreserved_star__DOT__member__>(ts));
		}

		inline Access<::fgl::ast::node::member> Access<::fgl::ast::node::object_access>::member()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::member>(Get<::fgl::ast::Type::member>(ts));
		}

		inline Access<::fgl::ast::node::DOT> Access<::fgl::ast::node::object_access>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::DOT>(Get<::fgl::ast::Type::DOT>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__DOT__member__> Access<::fgl::ast::node::deamerreserved_arrow__member__>::deamerreserved_star__DOT__member__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__DOT__member__>(Get<::fgl::ast::Type::deamerreserved_star__DOT__member__>(ts));
		}

		inline Access<::fgl::ast::node::member> Access<::fgl::ast::node::deamerreserved_arrow__member__>::member()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::member>(Get<::fgl::ast::Type::member>(ts));
		}

		inline Access<::fgl::ast::node::DOT> Access<::fgl::ast::node::deamerreserved_arrow__member__>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::DOT>(Get<::fgl::ast::Type::DOT>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__DOT__member__> Access<::fgl::ast::node::deamerreserved_star__DOT__member__>::deamerreserved_star__DOT__member__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__DOT__member__>(Get<::fgl::ast::Type::deamerreserved_star__DOT__member__>(ts));
		}

		inline Access<::fgl::ast::node::member> Access<::fgl::ast::node::deamerreserved_star__DOT__member__>::member()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::member>(Get<::fgl::ast::Type::member>(ts));
		}

		inline Access<::fgl::ast::node::DOT> Access<::fgl::ast::node::deamerreserved_star__DOT__member__>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::DOT>(Get<::fgl::ast::Type::DOT>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____> Access<::fgl::ast::node::member>::deamerreserved_arrow__deamerreserved_optional__argument____()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>(Get<::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__> Access<::fgl::ast::node::member>::deamerreserved_star__COMMA__argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>(Get<::fgl::ast::Type::deamerreserved_star__COMMA__argument__>(ts));
		}

		inline Access<::fgl::ast::node::argument> Access<::fgl::ast::node::member>::argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::argument>(Get<::fgl::ast::Type::argument>(ts));
		}

		inline Access<::fgl::ast::node::LEFT_PARANTHESIS> Access<::fgl::ast::node::member>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::LEFT_PARANTHESIS>(Get<::fgl::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline Access<::fgl::ast::node::RIGHT_PARANTHESIS> Access<::fgl::ast::node::member>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::RIGHT_PARANTHESIS>(Get<::fgl::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::member>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::VARNAME> Access<::fgl::ast::node::member>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::VARNAME>(Get<::fgl::ast::Type::VARNAME>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>::deamerreserved_star__COMMA__argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>(Get<::fgl::ast::Type::deamerreserved_star__COMMA__argument__>(ts));
		}

		inline Access<::fgl::ast::node::argument> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>::argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::argument>(Get<::fgl::ast::Type::argument>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__> Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>::deamerreserved_star__COMMA__argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>(Get<::fgl::ast::Type::deamerreserved_star__COMMA__argument__>(ts));
		}

		inline Access<::fgl::ast::node::argument> Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>::argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::argument>(Get<::fgl::ast::Type::argument>(ts));
		}

		inline Access<::fgl::ast::node::COMMA> Access<::fgl::ast::node::deamerreserved_star__COMMA__argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::COMMA>(Get<::fgl::ast::Type::COMMA>(ts));
		}

		inline Access<::fgl::ast::node::value> Access<::fgl::ast::node::argument>::value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::value>(Get<::fgl::ast::Type::value>(ts));
		}

		inline Access<::fgl::ast::node::flavor_specialization> Access<::fgl::ast::node::flavor>::flavor_specialization()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::flavor_specialization>(Get<::fgl::ast::Type::flavor_specialization>(ts));
		}

		inline Access<::fgl::ast::node::VARNAME> Access<::fgl::ast::node::flavor>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::VARNAME>(Get<::fgl::ast::Type::VARNAME>(ts));
		}

		inline Access<::fgl::ast::node::value> Access<::fgl::ast::node::flavor_specialization>::value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::value>(Get<::fgl::ast::Type::value>(ts));
		}

		inline Access<::fgl::ast::node::LEFT_PARANTHESIS> Access<::fgl::ast::node::flavor_specialization>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::LEFT_PARANTHESIS>(Get<::fgl::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline Access<::fgl::ast::node::RIGHT_PARANTHESIS> Access<::fgl::ast::node::flavor_specialization>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::fgl::ast::node::RIGHT_PARANTHESIS>(Get<::fgl::ast::Type::RIGHT_PARANTHESIS>(ts));
		}


	/*!	\class Access_if
	 *
	 *	\brief Accesses the node if it is of the given type.
	 *
	 *	\note A lambda has to be supplied as second argument with paramater: "Access<T>".
	 */
	template<typename T>
	struct Access_if
	{
		const ::deamer::external::cpp::ast::Node* node;

		template<typename FunctionType>
		Access_if(const ::deamer::external::cpp::ast::Node* node_, FunctionType function) : node(node_)
		{
			if (node->GetType() == static_cast<::std::size_t>(::fgl::ast::relation::NodeTypeToEnum_v<T>))
			{
				function(Access<T>(static_cast<const T*>(node)));
			}
		}
	};

}}}

#endif // FGL_AST_REFERENCE_ACCESS_H