#ifndef fgl_AST_ENUM_TYPE_H
#define fgl_AST_ENUM_TYPE_H

namespace fgl { namespace ast {

	enum class Type
	{
		// Reserved
		deamerreserved_unknown,

		// Terminals
		COMMENT,
		LEFT_SQUARE_BRACKET,
		RIGHT_SQUARE_BRACKET,
		LEFT_BRACKET,
		RIGHT_BRACKET,
		LEFT_PARANTHESIS,
		RIGHT_PARANTHESIS,
		COMMA,
		DOT,
		ARROW,
		COLON,
		NEW,
		DELETE,
		EXPAND,
		WITH,
		AND,
		EQEQ,
		EQ,
		GTE,
		GT,
		LTE,
		LT,
		ADD,
		MINUS,
		TARGET_SETTING,
		INCLUDE_SETTING,
		MEMBER_SETTING,
		FUNCTION_SETTING,
		USER_INSERTED_SETTING,
		VARNAME,
		NUMBER,
		STRING,
		ESCAPE_CHARS,

		// Non-Terminals
		program,
		deamerreserved_star__stmt__,
		stmt,
		setting_rule,
		entry_manipulation_rule,
		exit_manipulation_rule,
		capture,
		deamerreserved_arrow__deamerreserved_optional__flavor_capture____,
		deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__,
		manipulation,
		deamerreserved_arrow__deamerreserved_optional__instruction____,
		deamerreserved_star__COMMA__instruction__,
		instruction,
		new_flavor,
		delete_flavor,
		expand_flavor,
		flavor_capture,
		conditional_flavor,
		value,
		user_defined_instruction,
		object,
		object_access,
		deamerreserved_arrow__member__,
		deamerreserved_star__DOT__member__,
		member,
		deamerreserved_arrow__deamerreserved_optional__argument____,
		deamerreserved_star__COMMA__argument__,
		argument,
		flavor,
		flavor_specialization,
	};

}}

#endif // fgl_AST_ENUM_TYPE_H
