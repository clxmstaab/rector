<?php

namespace Rector\Tests\Defluent\Rector\MethodCall\FluentChainMethodCallToNormalMethodCallRector\Fixture;

use Symfony\Component\Console\Command\Command;

class SkipFactoryCall extends Command
{
    public function go()
    {
        $this->getApplication()
            ->setAutoExit(true);
    }
}
