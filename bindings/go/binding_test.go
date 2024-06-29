package tree_sitter_raku_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-raku"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_raku.Language())
	if language == nil {
		t.Errorf("Error loading Raku grammar")
	}
}
