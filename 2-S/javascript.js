/* ==========================================================================
   SCRIPT DE INTERATIVIDADE - CRIS DEGUSTE
   Finalidade: Controlar o menu mobile responsivo, fechar ao clicar em links
   e simular o envio do formulário de contato com feedback visual.
   ========================================================================== */

document.addEventListener('DOMContentLoaded', () => {
    const menuToggle = document.getElementById('menu-toggle');
    const navMenu = document.getElementById('nav-menu');
    const menuCloseBtn = document.getElementById('menu-close-btn');
    const navLinks = document.querySelectorAll('.nav-link');
    const contactForm = document.getElementById('contact-form');

    // Função para abrir/fechar o menu mobile
    function toggleMenu() {
        navMenu.classList.toggle('active');
        const isExpanded = navMenu.classList.contains('active');
        menuToggle.setAttribute('aria-expanded', isExpanded);
    }

    if (menuToggle) {
        menuToggle.addEventListener('click', toggleMenu);
    }

    if (menuCloseBtn) {
        menuCloseBtn.addEventListener('click', toggleMenu);
    }

    // Fechar menu ao clicar em qualquer link de navegação
    navLinks.forEach(link => {
        link.addEventListener('click', () => {
            if (navMenu.classList.contains('active')) {
                toggleMenu();
            }
        });
    });

    // Simulação de envio do formulário de contato com feedback acadêmico
    if (contactForm) {
        contactForm.addEventListener('submit', (e) => {
            e.preventDefault();
            
            const nameInput = document.getElementById('name').value;
            
            alert(`Obrigado, ${nameInput}! Sua mensagem foi enviada com sucesso (Demonstração acadêmica). Para pedidos reais, utilize o botão de WhatsApp.`);
            
            contactForm.reset();
        });
    }
});
