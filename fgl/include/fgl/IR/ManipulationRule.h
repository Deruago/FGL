#ifndef FGL_IR_MANIPULATIONRULE_H
#define FGL_IR_MANIPULATIONRULE_H

#include "fgl/IR/Capture.h"
#include "fgl/IR/Instruction.h"
#include "fgl/IR/Object.h"
#include "fgl/IR/Type.h"
#include <memory>
#include <utility>
#include <vector>

namespace fgl::ir
{
	class ManipulationRule
	{
	private:
		std::vector<std::unique_ptr<Capture>> captures;
		Object object;
		std::vector<std::unique_ptr<Instruction>> instructions;
		Type type;

	public:
		ManipulationRule(std::vector<std::unique_ptr<Capture>> captures_, Object object_,
						 std::vector<std::unique_ptr<Instruction>> instructions_, Type type_);

		ManipulationRule(const ManipulationRule& manipulationRule);

		ManipulationRule(ManipulationRule&& manipulationRule) noexcept;

	public:
		Object GetTarget() const;

		std::vector<DifferenceFlavor> GetFlavors() const;
		const std::vector<std::unique_ptr<Capture>>& GetCapture() const;
		const std::vector<std::unique_ptr<Instruction>>& GetInstructions() const;
	};
}

#endif // FGL_IR_MANIPULATIONRULE_H
