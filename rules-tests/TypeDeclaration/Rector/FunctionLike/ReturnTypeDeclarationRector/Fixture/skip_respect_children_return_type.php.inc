<?php

namespace Rector\Tests\TypeDeclaration\Rector\FunctionLike\ReturnTypeDeclarationRector\Fixture;

class SkipRespectChildrenReturnTypeParent
{
    public function run()
    {
        throw new \Exception("not implemented");
    }
}

class RespectChildrenReturnType extends SkipRespectChildrenReturnTypeParent {
    public function run() : Baba {
       return new Baba();
    }
}

class Baba {
}
?>
