<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddArrayReturnDocTypeRector\Fixture;

class WithComment
{
    /**
     * @var int[]
     */
    private $values;

    /**
     * @return somethign some integer values
     */
    public function getValues()
    {
        return $this->values;
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddArrayReturnDocTypeRector\Fixture;

class WithComment
{
    /**
     * @var int[]
     */
    private $values;

    /**
     * @return int[] some integer values
     */
    public function getValues()
    {
        return $this->values;
    }
}

?>
