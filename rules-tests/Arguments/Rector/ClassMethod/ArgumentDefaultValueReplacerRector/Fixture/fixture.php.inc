<?php

namespace Rector\Tests\Arguments\Rector\ClassMethod\ArgumentDefaultValueReplacerRector\Fixture;

use Symfony\Component\DependencyInjection\ContainerBuilder;

function argumentDefalutValue()
{
    $container = new ContainerBuilder();
    $container->register('foo', 'stdClass')
        ->setScope(ContainerBuilder::SCOPE_PROTOTYPE);
}

?>
-----
<?php

namespace Rector\Tests\Arguments\Rector\ClassMethod\ArgumentDefaultValueReplacerRector\Fixture;

use Symfony\Component\DependencyInjection\ContainerBuilder;

function argumentDefalutValue()
{
    $container = new ContainerBuilder();
    $container->register('foo', 'stdClass')
        ->setScope(false);
}

?>
