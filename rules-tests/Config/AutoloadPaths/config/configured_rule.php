<?php

declare(strict_types=1);

use Rector\Core\Configuration\Option;
use Symfony\Component\DependencyInjection\Loader\Configurator\ContainerConfigurator;

return static function (ContainerConfigurator $containerConfigurator): void {
    $services = $containerConfigurator->services();
    $parameters = $containerConfigurator->parameters();

    //require_once __DIR__.'/../Rector/AutoloadingTestRector.php';

    // $parameters->set(Option::AUTOLOAD_PATHS, [__DIR__ . '/../classes/autoloader.php.inc']);

    $services->set(\Rector\Tests\Config\AutoloadPaths\AutoloadedClassTest\AutoloadingTestRector::class);
};
