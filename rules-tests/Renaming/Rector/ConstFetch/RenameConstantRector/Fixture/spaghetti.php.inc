<?php

namespace Rector\Tests\Renaming\Rector\ConstFetch\RenameConstantRector\Fixture;

final class Spaghetti
{
    public function run()
    {
        if (OLD_CONSTANT) { ?><some html><?php }
    }
}

?>
-----
<?php

namespace Rector\Tests\Renaming\Rector\ConstFetch\RenameConstantRector\Fixture;

final class Spaghetti
{
    public function run()
    {
        if (NEW_CONSTANT) { ?><some html><?php }
    }
}

?>
