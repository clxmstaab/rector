<?php declare(strict_types=1);

namespace Rector\Tests\Rector\Typehint\ParentTypehintedArgumentRector;

use Rector\Testing\PHPUnit\AbstractRectorTestCase;

/**
 * @covers \Rector\Rector\Typehint\ParentTypehintedArgumentRector
 */
final class ParentTypehintedArgumentRectorTest extends AbstractRectorTestCase
{
    public function test(): void
    {
        $this->doTestFiles(
            [[__DIR__ . '/Wrong/SomeClassImplementingParserInterface.php', __DIR__ . '/Correct/correct.php.inc'], [
                __DIR__ . '/Wrong/MyMetadataFactory.php',
                __DIR__ . '/Correct/correct2.php.inc',
            ]]
        );
    }

    protected function provideConfig(): string
    {
        return __DIR__ . '/config.yml';
    }
}
