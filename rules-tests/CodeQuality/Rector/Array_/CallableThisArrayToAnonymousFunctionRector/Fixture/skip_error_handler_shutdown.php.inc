<?php

namespace Rector\Tests\CodeQuality\Rector\Array_\CallableThisArrayToAnonymousFunctionRector\Fixture;

class SkipErrorHandlerShutdown
{
    public function run()
    {
        register_shutdown_function([$this, 'shutdown_function']);
    }

    public function shutdown_function()
    {
    }
}
