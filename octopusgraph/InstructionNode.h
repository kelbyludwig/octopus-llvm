#ifndef INSTRUCTION_NODE_H
#define INSTRUCTION_NODE_H

#include <ostream>
#include "llvm/IR/Function.h"
#include "OctopusNode.h"

namespace Octopus {

	class OctopusGraph;

	class InstructionNode : public Node {
	public:
		InstructionNode(OctopusGraph &ograph, Instruction *instruction);
		virtual std::string getCode();
		Instruction *getLLVMInstruction() { return llvm_instruction; }
		virtual bool isInstruction() { return true; }

	private:

		OctopusGraph &octopus_graph;
		Instruction *llvm_instruction;
	};

}

#endif
